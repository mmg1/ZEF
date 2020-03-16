/* Code by Z0F */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ZEF
{
    class Util : Form1
    {
        // Convert byte array to string:
        public static string ByteArrayToString(byte[] ba)
        {
            StringBuilder hex = new StringBuilder(ba.Length * 2);
            foreach(byte b in ba)
            {
                hex.AppendFormat("{0:X2} ", b);
            }
            return hex.ToString();
        }

        // Check if a string is a valid address:
        public static bool IsValidAddress(string hex)
        {
            return ((hex.Length < 17 && hex.Length >= 0) && (System.Text.RegularExpressions.Regex.IsMatch(hex, @"\A\b[0-9a-fA-F]+\b\Z")));
        }
    }
}
