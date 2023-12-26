#include<stdio.h>
#include <unistd.h>
#include <string.h>

char welcome1[] =" __    __    __    ________ ";
char welcome2[] ="/  |  /  | _/  |  /        |";
char welcome3[] ="$$ |  $$ |/ $$ |  $$$$$$$$/";
char welcome4[] ="$$ |__$$ |$$$$ |      /$$/ ";
char welcome5[] ="$$    $$ |  $$ |     /$$/  ";
char welcome6[] ="$$$$$$$$ |  $$ |    /$$/    ";
char welcome7[] ="      $$ | _$$ |_  /$$/    ";
char welcome8[] ="      $$ |/ $$   |/$$/     ";
char welcome9[] ="      $$/ $$$$$$/ $$/       ";

void init(){
    puts(welcome1);
    puts(welcome2);
    puts(welcome3);
    puts(welcome4);
    puts(welcome5);
    puts(welcome6);
    puts(welcome7);
    puts(welcome8);
    puts(welcome9);
}

void initbuf() {
    setvbuf(stdin, 0, 2, 0);
    setvbuf(stdout, 0, 2, 0);
    setvbuf(stderr, 0, 2, 0);
}

int func(char var[12]){
    char buf[8];
    puts("---welcome to pop world!---");
    puts("---input your pop code---");
    read(0,buf,1);
}

int main(){
    char s[30];
    init();
    initbuf();
    puts("input:(ye / no)");
    read(0, s, 2);
    if (strcmp(s, "ye") == 0){
       func(s);
    }
    puts("xxxx{xxxx_xxxx_xxxx_xxxx}");
    puts("bye ~~~");
    
}