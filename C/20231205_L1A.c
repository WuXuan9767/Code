#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("交换之前：\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    swap(&num1, &num2);

    printf("交换之后：\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    return 0;
}