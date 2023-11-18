#include<stdio.h>

int main()
{
   int a[3][3]={1,2,3,4,5,6,7,8,9};
   int Maindiagonal=0,Subdiagonal=0;

   printf("请输入一个三阶矩阵：\n");
   for (int i= 0;i<3;i++)
    {
        for (int j= 0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("你输入的矩阵为：\n");
    for (int i= 0;i<3;i++)
    {
        for (int j= 0;j<3;j++)
        {    
            printf("%d ",a[i][j]);

            if (i==j)
            {
                Maindiagonal +=a[i][j];
            }
            if (i + j == 2)
            {
                Subdiagonal +=a[i][j];
            }
        }
         printf("\n");
    }

    printf("主对角线元素之和为：%d \n",Maindiagonal);
    printf("副对角线元素之和为：%d \n",Subdiagonal);
    printf("转置矩阵为：\n");
    
    for (int i= 0;i<3;i++)
    {
        for (int j= 0;j<3;j++)
        {    
            printf("%d ",a[j][i]);
        }
         printf("\n");
    }
}