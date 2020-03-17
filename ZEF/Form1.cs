﻿/* Code by Z0F */

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

namespace ZEF
{
    public partial class Form1 : Form
    {
        public static Process g_Proc;
        public static IntPtr modAddr = (IntPtr)0x0;

        public Form1()
        {
            InitializeComponent();
            // Init the global proc var so it doesn't cause errors.
            g_Proc = Process.GetCurrentProcess();
        }

        public void Log(string str)
        {
            rtxt_Debug.AppendText(str + Environment.NewLine);
        }

        // Get the proc ID of the process written in the text box:
        private void btnClick_GetProcID(object sender, EventArgs e)
        {
            try
            {
                g_Proc = Process.GetProcessesByName(txt_ProcName.Text)[0];
            }
            catch(System.IndexOutOfRangeException)
            {
                //If it couldn't get the proc, the attempted array access above will throw and out of range exception.
                txt_ProcID.Text = "<ProcID>";
                return;
            }

            txt_ProcID.Text = Convert.ToString(g_Proc.Id);
            this.Text = "ZEF - Process: " + txt_ProcName.Text;
        }

        // Get the module address from the module written in the text box:
        private void btnClick_GetMod(object sender, EventArgs e)
        {
            if(txt_ProcID.Text == "<ProcID>")
            {
                Log("Error getting module: Invalid Process ID.");
                return;
            }
            modAddr = Core.GetModuleBaseAddress(g_Proc, txt_ModName.Text);
            if(modAddr == (IntPtr)0x0)
            {
                return;
            }
            txt_ModAddr.Text = "0x" + modAddr.ToString("X");
        }

        // Read the amount of memory specified by the size at the address + offset in the text boxes:
        private void btnClick_ReadAddr(object sender, EventArgs e)
        {
            int size;
            if(Int32.TryParse(txt_Size.Text, out size)) // Try parsing UInt instead of Int32?
            {
                if(size > 0 && size < g_Proc.PagedSystemMemorySize64)
                {
                    // Init vars:
                    IntPtr addr = (IntPtr)0x0;
                    string addrTxt = txt_Addr.Text.Replace(" ", "").Trim();

                    // Addresses are 0-16 (inclusive) chars long, validate given to match that:
                    if(addrTxt.Length < 17 && addrTxt.Length > 0)
                    {
                        //First, set and validate the address if it's not "base":
                        if(addrTxt.ToLower() != "base")
                        {
                            if(!Util.IsValidAddress(addrTxt)) { Log("Invalid Address."); return; }
                            addr = (IntPtr)(Convert.ToUInt64(addrTxt, 16));
                        }

                        //Check for an offset:
                        if(txt_Offset.Text.Length > 0)
                        {
                            // Get the sign (+-) for the offset:
                            string offTxt = txt_Offset.Text.Trim().ToUpper();
                            string sign = offTxt.Substring(0, 1);
                            // Check for sub offset (default to +):
                            if(sign == "-")
                            {
                                //Remove sign and junk and validate:
                                offTxt = offTxt.Replace(" ", "").Replace("-", "").Trim();
                                if(!Util.IsValidAddress(offTxt)) { Log("Invalid Offset."); return; }

                                // If "base" is being used, then add to the base. Otherwise, add to the supplied addr:
                                addr = (addrTxt.ToLower() == "base") ? (IntPtr)(Convert.ToUInt64(txt_ModAddr.Text, 16) - (Convert.ToUInt64(offTxt, 16)))
                                    : (IntPtr)(Convert.ToUInt64(addrTxt, 16) - (Convert.ToUInt64(offTxt, 16)));
                                Log("Final Addr - Off = " + addr.ToString("X"));
                            }
                            // + sign or no sign:
                            else
                            {
                                offTxt = offTxt.Replace(" ", "").Replace("+", "").Trim();
                                if(!Util.IsValidAddress(offTxt)) { Log("Invalid Offset."); return; }

                                // If "base" is being used, then add to the base. Otherwise, add to the supplied addr:
                                addr = (addrTxt.ToLower() == "base") ? (IntPtr)(Convert.ToUInt64(txt_ModAddr.Text, 16) + (Convert.ToUInt64(offTxt, 16)))
                                    : (IntPtr)(Convert.ToUInt64(addrTxt, 16) + (Convert.ToUInt64(offTxt, 16)));
                                Log("Final Addr + Off = " + addr.ToString("X"));
                            }
                        }
                        // No offset:
                        else { Log("Final Addr (no off) = " + addr.ToString("X")); }
                    }

                    // --- Read Mem --- //
                    byte[] buf = new byte[size];
                    IntPtr numOfBytesRead;

                    //Console.WriteLine(addr.ToString("X"));

                    IntPtr hProc = Core.OpenProcess(Core.ProcessAccessFlags.VirtualMemoryRead, false, g_Proc.Id);
                    Core.ReadProcessMemory(hProc, addr, buf, buf.Length, out numOfBytesRead);

                    lbl_Bytes.Text = Util.ByteArrayToString(buf);
                    //Console.WriteLine(Util.ByteArrayToString(buf));
                    return;
                }
                else
                {
                    Log("Size of data to R/W was 0.");
                }
            }
            //Console.WriteLine("Invalid Size");
            Log("Invalid R/W Size. Too big or invalid chars.");
            return;
        }

        private void btnClick_WriteAddr(object sender, EventArgs e)
        {
            /*
             * Very similar to btnClick_ReadAddr. Should probably write some functions.
             * Check R/W size.
             * Check if addr == "base":
             *      addr = base + offset;
             *  else: addr = input + offset
            */
        }
    }
}