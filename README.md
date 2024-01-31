# C语言入门

## 






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

## 配置环境变量

### 配置编译器

- 1.vscode 搭建 C/C++ 编译环境教程（Mac）

- 2.安装 C/C++ 插件

如下图示，点击扩展，然后在商店文本框中输入 C/C++，再选择 C/C++ 插件，点击安装。

<img width="465" alt="image" src="https://github.com/liyinchigithub/c_learn/assets/19643260/31998857-466b-4589-92d3-73ca07d01f8f">

- 3.打开终端
command + 空格，然后输入terminal，如下图示。

<img width="341" alt="image" src="https://github.com/liyinchigithub/c_learn/assets/19643260/b50f7bfc-7311-45a3-a03a-5f0c1a9e6237">

在命令行中输入 clang --version，如果之前没有安装 clang 的话，就会出现下图的对话框，点击安装，如下图。

<img width="659" alt="image" src="https://github.com/liyinchigithub/c_learn/assets/19643260/55fee77c-f3e7-4f43-9f98-ffa671a9928e">


安装完成之后，验证是否成功，在命令行中输入 clang --version，显示大致如下图示，代表成功了。

<img width="729" alt="image" src="https://github.com/liyinchigithub/c_learn/assets/19643260/b5f97ed6-88e9-4754-a12d-84f0b644d777">


- 4.编写测试代码
新建 test 文件夹，并在 vscode 中打开，如下图示。

<img width="387" alt="image" src="https://github.com/liyinchigithub/c_learn/assets/19643260/c9fd73c5-6602-4ec5-8260-c361daefccaf">


- 5.新建猜测是脚本

点击下图中的椭圆形框，添加 cpp 文件，如下图示。

<img width="595" alt="image" src="https://github.com/liyinchigithub/c_learn/assets/19643260/c64a81e9-2d72-4616-81e6-9a9b6e92965a">


按下 command + shift + P 调出面板，输入C/C++，选择编辑配置(UI)，如下图示。
<img width="489" alt="image" src="https://github.com/liyinchigithub/c_learn/assets/19643260/3488b51d-b6ed-443d-a2b8-db1d0721bd48">

输入一段可以运行的简易代码，如下图示。

<img width="613" alt="image" src="https://github.com/liyinchigithub/c_learn/assets/19643260/673d68c5-9085-4785-a8d1-4c3925bf64eb">

## 配置编译器

<img width="400" heigh="400" alt="image" src="https://github.com/liyinchigithub/c_learn/assets/19643260/17296c52-4496-4164-8093-98a11d0405c1">



参考：
>https://zhuanlan.zhihu.com/p/666667188
