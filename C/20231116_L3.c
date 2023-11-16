#include <stdio.h>
#include <string.h>

int last(char* str)
{
    int len = strlen(str);
    int count = 0;
    for(int i = len - 1; i >= 0; i--)
    {
        if(str[i] == ' ')
        {
            break;
        }
        count++;
    }
    return count;
}
void reverse(char* str)
{
    int len = strlen(str);
    for(int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char str[] = "Hello, Redrocker!";
    printf("最后一个单词的长度是：%d\n", last(str));
    printf("倒序输出字符串为：");
    reverse(str);
    return 0;
}
