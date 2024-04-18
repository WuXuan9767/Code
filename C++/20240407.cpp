#include <iostream>

// 假设这里有一个名为abd的函数定义
void abd() {
    // abd函数的实现
    printf("调用了abd函数。\n");
}

int main() {
    char input;
    printf("请输入一个字符: ");
    scanf("%c", &input);

    switch(input) {
        case 'A':
        case 'a':
            abd();
            break;
        default:
            printf("输入了其他字符。\n");
    }

    return 0;
}
