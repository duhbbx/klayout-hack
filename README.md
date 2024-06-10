# 构建 klayout

1. 下载klayout hack之后的源码: https://github.com/duhbbx/klayout-hack.git
2. 安装 msys2
3. 打开 msys2 mingw 64 的shell
4. 进入到下载的klayout hack源码的目录
5. 更新pacman的清华镜像
6. 安装必要的组件
    ```bash
    pacman -S make zip mingw-w64-x86_64-gcc mingw-w64-x86_64-make \
          mingw-w64-x86_64-python3 mingw-w64-x86_64-qt5       \
          mingw-w64-x86_64-ruby mingw-w64-x86_64-libgit2
    ```
7. 执行构建
    ```
    # Run in MSYS MinGW 64bit shell. This build uses 4 cores for compilation ("-j4"):
    build.sh -j4
    ```
8. 构建后的任务
    ```bash
    cd bin-release
    python3 -c "import sys; print(repr(sys.path))" >.python-paths.txt
    ```

![alt text](image-1.png)








# 添加到环境变量


![alt text](image.png)

mingw 64 的bin目录和klayout 构建后的 bin-release目录都加入到环境变量

构建全部结束，可以使用 c# 的代码调用了

参考下面的代码


# c# 使用的demo




```cs
using System;
using System.Runtime.InteropServices;

class Program
{
    // 定义 API 函数
    [DllImport("D:\\msys64\\home\\duhbb\\klayout\\bin-release\\klayout_exportapi.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern int api_klayout_main(ref int argc, IntPtr argv);

    static void Main(string[] args)
    {
        string directory = @"C:\Users\duhbb\Downloads\";
        string fileName = DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss") + ".png";

        string fullPath = Path.Combine(directory, fileName);

        Console.WriteLine("Export path: " + fullPath);
        // 准备参数
        int argc = 3; // 额外加一个是程序名称
        string[] newArgs = new string[3];
        newArgs[0] = "program_name"; // 模拟程序名称
        newArgs[1] = "C:\\Users\\duhbb\\Downloads\\20240529151519.gds";                     // gds 文件地址
        newArgs[2] = fullPath;                                                              // 导出的图片地址

        // 将参数转换为指针
        IntPtr argv = Marshal.AllocHGlobal(argc * IntPtr.Size);
        IntPtr[] argPtrs = new IntPtr[argc];
        for (int i = 0; i < argc; i++)
        {
            argPtrs[i] = Marshal.StringToHGlobalAnsi(newArgs[i]);
            Marshal.WriteIntPtr(argv, i * IntPtr.Size, argPtrs[i]);
        }

        // 调用 DLL 函数
        int result = api_klayout_main(ref argc, argv);

        // 释放分配的内存
        for (int i = 0; i < argc; i++)
        {
            Marshal.FreeHGlobal(argPtrs[i]);
        }
        Marshal.FreeHGlobal(argv);
        // 输出返回值
        Console.WriteLine("Returned value: " + result);
    }
}
```
