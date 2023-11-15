#include<stdio.h>

int main()
{
    int a, b;
    double c;

    printf("请输入两个数字，用空格隔开\n");
    
    while (1){
        scanf("%d%*c%d", &a,&b);
        if(a>b)
        {
            printf("第一个数字要小于第二个数字\n请重新输入");
        }   
        else
        {
            c=(float)a/b*100;
            printf("%d is %.1f%% of %d",a,c,b);
            break;
        }
    }
    
 return 0;
}