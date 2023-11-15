#include<stdio.h>

int main()
{
    int arr[10];
    printf("请输入10个数字:\n");
    for(int a=0;a<10;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (int i = 0; i < 10-1; i++)
    {
        for (int j = 0; j < 10-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("排序后的数组:\n");
    for(int i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
}