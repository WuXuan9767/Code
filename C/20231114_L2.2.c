#include<stdio.h>

int main()
{
    int arr[10];
    printf("请输入10个数字:\n");
    for(int a=0;a<10;a++)
    {
        scanf("%d",&arr[a]);
    }


    
    printf("排序后的数组:\n");
    for(int i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
}