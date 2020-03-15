/* Code by Z0F */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ZEF {
    class Util {
        // Convert byte array to string:
        public static string ByteArrayToString(byte[] ba) {
            StringBuilder hex = new StringBuilder(ba.Length * 2);
            foreach(byte b in ba) {
                hex.AppendFormat("{0:X2} ", b);
            }
            return hex.ToString();
        }

        // Check if a string is a valid address:
        public static bool IsValidAddress(string hex) {
            if(hex.Length > 16 || hex.Length < 0) {
                Console.WriteLine("Addr too long.");
                return false;
            }
            foreach(char x in hex) {
                if(x > 'F' || x < 0) {
                    Console.WriteLine("Addr out of range.");
                    return false;
                }
            }
            return true;
        }
    }
}
