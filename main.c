#include <stdio.h>
#include "func.h"
int main() {
    int x = 10, y = 20;
    printf("Sum: %d\n", add(x, y));
    printf("Multiply: %d\n", multiply(x, y));
    //成员进行注释，与原文件同一位置存在注释不同，体验冲突
    return 0;
}