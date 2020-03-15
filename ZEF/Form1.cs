/* Code by Z0F */

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using System.Diagnostics;

namespace ZEF {
    public partial class Form1 : Form {
        public static Process g_Proc;
        public static IntPtr modAddr;

        public Form1() {
            InitializeComponent();
            g_Proc = Process.GetCurrentProcess();
        }

        private void btnClick_GetProcID(object sender, EventArgs e) {
            try {
                g_Proc = Process.GetProcessesByName(txt_ProcName.Text)[0];
            } catch(System.IndexOutOfRangeException) {
                txt_ProcID.Text = "<ProcID>";
                return;
            }

            txt_ProcID.Text = Convert.ToString(g_Proc.Id);
            this.Text = "ZEF - Process: " + txt_ProcName.Text;
        }

        private void btnClick_GetMod(object sender, EventArgs e) {
            if(txt_ProcID.Text == "<ProcID>") {
                Console.WriteLine("GetMod: Invalid ProcID.");
                return;
            }
            modAddr = Core.GetModuleBaseAddress(g_Proc, "Testing.exe");
            txt_ModAddr.Text = "0x" + modAddr.ToString("X");

            //Console.WriteLine(addr.ToString("X"));

            //byte[] bytes = new byte[20] { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
            //Core.Patch(g_Proc, addr, bytes, (UIntPtr)bytes.Length);
        }

        private void btnClick_ReadAddr(object sender, EventArgs e) {
            int size;
            if(Int32.TryParse(txt_Size.Text, out size)) {
                if(size >= 0 && size < g_Proc.PagedSystemMemorySize64) {
                    byte[] buf = new byte[size];
                    IntPtr numOfBytesRead;

                    // ---------------------------
                    // WIP + TODO - Find a way to take an addr as input and pass that to read:
                    // ---------------------------

                    IntPtr addr = (IntPtr)0x0000000000000000;

                    if(txt_Addr.Text.Length < 17) {
                        if(txt_Addr.Text.StartsWith("base")) {
                            //base+123
                            string offset = txt_Addr.Text;
                            // Strip "base+" and any spaces off to get only the offset:
                            offset = offset.Remove(0, 4);
                            offset = offset.Replace("+", "");
                            offset = offset.Trim();
                            offset = offset.ToUpper();
                            Console.WriteLine("Offset: " + offset);
                            if(Util.IsValidAddress(offset)) {
                                addr = Core.GetModuleBaseAddress(g_Proc.Id, txt_ModName.Text);
                                Console.WriteLine(((UInt64)addr + Convert.ToUInt64(offset, 16)).ToString("X"));                               
                            }
                            return;
                        } else {
                            foreach(char x in txt_Addr.Text) {
                                if(x > 'F' || x < 0) {
                                    Console.WriteLine("Invalid Char: " + x);
                                    return;
                                }
                            }
                            try {
                                addr = (IntPtr)Convert.ToInt64(txt_Addr.Text, 16);
                            } catch(System.ArgumentOutOfRangeException) {
                                Console.WriteLine("EX: Addr out of range.");
                                return;
                            }
                        }
                    }

                    Console.WriteLine(addr.ToString("X"));

                    IntPtr hProc = Core.OpenProcess(Core.ProcessAccessFlags.VirtualMemoryRead, false, g_Proc.Id);
                    Core.ReadProcessMemory(hProc, addr, buf, buf.Length, out numOfBytesRead);

                    lbl_Bytes.Text = Util.ByteArrayToString(buf);
                    Console.WriteLine(Util.ByteArrayToString(buf));
                    return;
                }
            }
            Console.WriteLine("Invalid Size");
            return;
        }
    }
}