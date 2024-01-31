# C语言入门








# 常见问题

##  1.mac vscode运行C main.c报错

“fixed/stdio.h:78:10: fatal error: _stdio.h: No such file or directory
   78 | #include <_stdio.h>
      |          ^~~~~~~~~~
compilation terminated.”

解决办法：

（1）安装xcode
（2）运行xcode-select -p 弹出下载器安装
（3）通过运行 sudo xcodebuild -license accept 来接受 Xcode 许可协议
（4）运行xcode-select --install
（5）运行sudo xcodebuild -license accept 接受 Xcode 许可协议
（6）运行brew install gcc
（7）运行 gcc-11 --version 来查看是否能够正确输出版本信息。


## 2.运行run debug 报错
“检测到 #include 错误。请更新 includePath。已为此翻译单元(/Users/liyinchi/workspace/C/c_learn/main.c)禁用波形曲线。C/C++(1696)
无法打开 源 文件 "_stdio.h" (dependency of "stdio.h")C/C++(1696)”

解决办法：

（1）打开 c_cpp_properties.json 文件：
- 在 VSCode 中，点击左侧活动栏的 C/C++ 图标（象征性的 {}）来打开 C/C++ 视图。
- 点击视图顶部的“配置 (UI)”按钮，或者在命令面板（Ctrl+Shift+P 或 Cmd+Shift+P）中输入并选择“C/C++: Edit Configurations (UI)”。
- 如果你更喜欢直接编辑 JSON 文件，可以选择“C/C++: Edit Configurations (JSON)”来打开 c_cpp_properties.json 文件。

（2）更新 includePath：
在 c_cpp_properties.json 文件中，找到 includePath 属性。你需要确保它包含了标准库头文件的路径。对于 macOS，这通常是 /usr/local/include 和 Xcode 或 Command Line Tools 提供的路径。


或配置环境变量

```C

```



```C

clang --version
Apple clang version 15.0.0 (clang-1500.1.0.2.5)
Target: x86_64-apple-darwin23.2.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin

```

参考：
>https://zhuanlan.zhihu.com/p/666667188