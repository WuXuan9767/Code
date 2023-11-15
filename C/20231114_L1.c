#include<stdio.h>
int main()
{
    char character;
    printf("请输入一个字母：\n");
    scanf("%c",&character);
    if(character > 96 && character <123)
    {
        character-=32;
        printf("大写为%c\n十进制ASCII码值为%d",character,character);
    }
    else if (character > 64 && character <91)
    {
        character+=32;
        printf("小写为%c\n十进制ASCII码值为%d",character,character);
    }
    else
    {
        printf("你输入的不是字母");
    }
    
    return 0;
}