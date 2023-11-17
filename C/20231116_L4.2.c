#include <stdio.h>

void print(int (*matrix)[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3];
    int Maindiagonal = 0, Subdiagonal = 0;
    int Transposedmatrix[3][3];

    printf("请输入一个三阶矩阵：\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                Maindiagonal += matrix[i][j];
            }
            if (i + j == 3 - 1) {
                Subdiagonal += matrix[i][j];
            }
            Transposedmatrix[j][i] = matrix[i][j];
        }
    }

    printf("你输入的矩阵是：\n");
    print(matrix);

    printf("主对角线元素之和是：%d\n", Maindiagonal);
    printf("副对角线元素之和是：%d\n", Subdiagonal);

    printf("转置矩阵为：\n");
    print(Transposedmatrix);

    return 0;
}
