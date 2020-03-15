/* Code by Z0F */

using System;
using System.Diagnostics;
using System.Runtime.InteropServices;

namespace ZEF {
    public class Core : WinAPI {
        // Get mod base addr with Process data type:
        public static IntPtr GetModuleBaseAddress(Process proc, string modName) {
            IntPtr addr = IntPtr.Zero;

            foreach(ProcessModule m in proc.Modules) {
                if(m.ModuleName == modName) {
                    addr = m.BaseAddress;
                    break; ;
                }
            }
            return addr;
        }
        // Get mod base addr with procID:
        public static IntPtr GetModuleBaseAddress(int procId, string modName) {
            IntPtr modBaseAddr = IntPtr.Zero;

            IntPtr hSnap = CreateToolhelp32Snapshot(SnapshotFlags.Module | SnapshotFlags.Module32, procId);

            if(hSnap.ToInt64() != INVALID_HANDLE_VALUE) {
                MODULEENTRY32 modEntry = new MODULEENTRY32();
                modEntry.dwSize = (uint)Marshal.SizeOf(typeof(MODULEENTRY32));

                if(Module32First(hSnap, ref modEntry)) {
                    do {
                        if(modEntry.szModule.Equals(modName)) {
                            modBaseAddr = modEntry.modBaseAddr;
                            break;
                        }
                    } while(Module32Next(hSnap, ref modEntry));
                }
            }

            CloseHandle(hSnap);
            return modBaseAddr;
        }
        // Write to memory:
        public static void Patch(Process proc, IntPtr dst, byte[] bytes, UIntPtr size) {
            IntPtr num;
            Console.WriteLine("Writing " + Util.ByteArrayToString(bytes) + " to: " + dst.ToString("X"));

            IntPtr hProc = OpenProcess(ProcessAccessFlags.All, false, (int)proc.Id);
            //VirtualProtectEx(proc, dst, size, 0x40, out oldProt);
            WriteProcessMemory(hProc, dst, bytes, size, out num);
            //VirtualProtectEx(proc, dst, size, oldProt, out oldProt);
            Console.WriteLine(num);
        }

        public static IntPtr FindPTRAddr(IntPtr hProc, IntPtr ptr, int[] offsets) {
            var buffer = new byte[IntPtr.Size];

            foreach(int i in offsets) {
                ReadProcessMemory(hProc, ptr, buffer, buffer.Length, out var read);
                ptr = (IntPtr.Size == 4) ? IntPtr.Add(new IntPtr(BitConverter.ToInt32(buffer, 0)), i) : ptr = IntPtr.Add(new IntPtr(BitConverter.ToInt64(buffer, 0)), i);
            }
            return ptr;
        }

    }
}