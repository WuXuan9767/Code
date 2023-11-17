#include<stdio.h>

int main()
{
    int arr[10];
    printf("请输入10个数字:\n");
    for(int a=0;a<10;a++)
    {
        scanf("%d",&arr[a]);
    }

    for (int i = 0; i < 9; i++)
    {
        int min = i;
        for (int j = i+1; j < 10; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        }
    }
    
    printf("排序后的数组:\n");
    for(int i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
}
