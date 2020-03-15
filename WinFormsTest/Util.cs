/* Code by Z0F */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WinFormsTest {
    class Util {
        public static string ByteArrayToString(byte[] ba) {
            StringBuilder hex = new StringBuilder(ba.Length * 2);
            foreach(byte b in ba) {
                hex.AppendFormat(" {0:X2}", b);
            }
            return hex.ToString();
        }
    }
}
