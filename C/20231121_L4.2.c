#include <stdio.h>


void print(int *matrix) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(matrix + i*3 + j));
        }
        printf("\n");
    }
}

void print_diagonal(int *matrix) {
    int Maindiagonal = 0;
    int Subdiagonal = 0;

    for (int i = 0; i < 3; i++) {
        Maindiagonal += *(matrix + i*3 + i);
        Subdiagonal += *(matrix + i*3 + (3 - i - 1));
    }

    printf("主对角线元素之和: %d\n", Maindiagonal);
    printf("副对角线元素之和: %d\n", Subdiagonal);
}

void print_transpose(int *matrix) {
    printf("转置矩阵:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(matrix + j*3 + i));
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3];

    printf("请输入一个三阶矩阵:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", (*(matrix + i) + j));
        }
    }

    printf("您输入的矩阵:\n");
    print((int *)matrix);
    print_diagonal((int *)matrix);
    print_transpose((int *)matrix);

    return 0;
}
