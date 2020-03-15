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
        Process g_Proc;
        public Form1() {
            InitializeComponent();
        }

        private void btnClick_GetProcID(object sender, EventArgs e) {
            try {
                g_Proc = System.Diagnostics.Process.GetProcessesByName(txt_ProcName.Text)[0];
            } catch(System.IndexOutOfRangeException) {
                lbl_ProcID.Text = "<ProcID>";
                return;
            }

            lbl_ProcID.Text = Convert.ToString(g_Proc.Id);
            this.Text = txt_ProcName.Text;
        }

        private void btnClick_GetMod(object sender, EventArgs e) {
            if(g_Proc.Id == -1) {
                Console.WriteLine("GetMod: Invalid ProcID.");
                return;
            }

            byte[] buf = new byte[100];
            IntPtr numOfBytesRead;
            IntPtr addr = (IntPtr)0x00E3158D;

            IntPtr hProc = Core.OpenProcess(Core.ProcessAccessFlags.VirtualMemoryRead, false, g_Proc.Id);
            Core.ReadProcessMemory(hProc, addr, buf, buf.Length, out numOfBytesRead);

            lbl_Bytes.Text = Util.ByteArrayToString(buf);
            Console.WriteLine(Util.ByteArrayToString(buf));

            byte[] bytes = new byte[20] {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
            Core.Patch(g_Proc, addr, bytes, (UIntPtr)bytes.Length);
        }
    }
}