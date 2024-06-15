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

using System;
using System.Runtime.InteropServices;

[StructLayout(LayoutKind.Sequential)]
public struct ImageExportOption
{
    /// <summary>
    /// 待导入的文件地址
    /// </summary>
    [MarshalAs(UnmanagedType.LPStr)]
    public string importFilePath;
    /// <summary>
    /// 导入的文件类型
    /// </summary>
    [MarshalAs(UnmanagedType.LPStr)]
    public string importFileType;
    /// <summary>
    /// 到处的图片地址
    /// </summary>
    [MarshalAs(UnmanagedType.LPStr)] 
    public string exportFilePath;
    /// <summary>
    /// 导出的图片类型
    /// </summary>
    [MarshalAs(UnmanagedType.LPStr)]
    public string exportImageType;
    /// <summary>
    /// 以什么宽度缩放
    /// </summary>
    public int width;

    /// <summary>
    /// 左上角的x1地址
    /// </summary>
    public int x1;
    /// <summary>
    /// 左上角的y1
    /// </summary>
    public int y1;
    /// <summary>
    /// 右下角的x2
    /// </summary>
    public int x2;
    /// <summary>
    /// 右下角的y2
    /// </summary>
    public int y2;

}


class Program
{
    // 定义 API 函数
    // 这个是 c# 代码
    [DllImport("D:\\msys64\\home\\duhbb\\klayout\\bin-release\\klayout_exportapi.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern int api_klayout_main(ImageExportOption option);

    static void Main(string[] args)
    {
        string directory = @"C:\Users\duhbb\Downloads\";
        string fileName = DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss") + ".bmp";
        string fullPath = Path.Combine(directory, fileName);
        Console.WriteLine("Export path: " + fullPath);
        ImageExportOption option = new ImageExportOption
        {
            importFilePath = "C:\\Users\\duhbb\\Downloads\\20240529151519.gds",
            importFileType = "gds",
            exportFilePath = fullPath,
            exportImageType = "bmp",
            width = 10000,
            x1 = 0,
            y1 = 0,
            x2 = 0,
            y2 = 0,
        };
        // 调用 DLL 函数
        int result = api_klayout_main(option);
        // 输出返回值
        Console.WriteLine("\nReturned value: " + result);
    }
}

```
