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
                if(size > 0 && size < g_Proc.PagedSystemMemorySize64) {
                    byte[] buf = new byte[size];
                    IntPtr numOfBytesRead;

                    // ---------------------------
                    // WIP + TODO - Find a way to take an addr as input and pass that to read:
                    // ---------------------------
                    IntPtr addr = (IntPtr)(Convert.ToInt32(txt_ModAddr.Text));

                    IntPtr hProc = Core.OpenProcess(Core.ProcessAccessFlags.VirtualMemoryRead, false, g_Proc.Id);
                    Core.ReadProcessMemory(hProc, modAddr, buf, buf.Length, out numOfBytesRead);

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