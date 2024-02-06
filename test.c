#include <stdio.h> // 包含标准输入输出头文件

#define DEBUG // 定义DEBUG宏

// 编译 gcc test.c -o test
// 运行 sudo ./test
int main() {
    #define RELEASE 1 // 定义RELEASE宏
    #if RELEASE == 1
        printf("This is a release version.\n");
        printf("This is always true.\n");
    #endif
    #ifdef DEBUG
        printf("Debug information\n");
    #endif

    #ifndef RELEASE
        printf("This is not a release version.\n");
    #endif

    return 0;

}
