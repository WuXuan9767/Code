#include<stdio.h>

int main()
{
    char *ch[100];
    printf("请输入一串字符\n");
    for (int a=0; a<6; a++)
    {
        scanf("%c",&ch[a]);
    }
    for(int i=0;i<6;i++)
    {
    printf("%c",*ch);
    }
    char *ch[100];
    printf("请输入一串字符\n");
    for (int a=0; a<6; a++)
    {
        scanf("%c",&ch[a]);
    }
    for(int i=0;i<6;i++)
    {
    printf("%c",*ch);
    }

}
