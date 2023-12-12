#include <stdio.h>
#include <string.h>

// 定义图书结构体
typedef struct {
    char title[50];
    char author[50];
    char publication_date[10];
} Book;

// 定义图书数组
Book library[100];
int count = 0;

// 添加图书函数
void add_book(char *title, char *author, char *date) {
    strcpy(library[count].title, title);
    strcpy(library[count].author, author);
    strcpy(library[count].publication_date, date);
    count++;
}

// 查找图书函数
void find_book(char *keyword) {
    int found=0;
    for(int i = 0; i < count; i++) {
        if(strstr(library[i].title, keyword) != NULL) {
            printf("图书标题: %s\n作者: %s\n出版日期: %s\n", library[i].title, library[i].author, library[i].publication_date);
            found=1;
        }
    }
    if(found=0){
    printf("未找到该书\n");
    }
}

// 删除图书函数
void delete_book(char *title) {
    int i = 0;
    while(i < count) {
        if(strcmp(library[i].title, title) == 0) {
            for(int j = i; j < count-1; j++) {
                library[j] = library[j+1];
            }
            count--;
        } else {
            i++;
        }
    }
}

void print_menu() {
        printf("**************************\n");
        printf("*****  1、添加图书   *****\n");
        printf("*****  2、查找图书   *****\n");
        printf("*****  3、删除图书   *****\n");
        printf("*****  0、退出图书馆 *****\n");
        printf("**************************\n");
}

int main() {
    char title[50], author[50], date[10], keyword[50];
    int choice;
    add_book("Book1", "Author1", "2001");
    add_book("Book2", "Author2", "2002");
    add_book("Book3", "Author3", "2003");

    while(1) {
        print_menu();
        printf("请输入您的选择：");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("请输入图书标题：");
                scanf("%s", title);
                printf("请输入作者：");
                scanf("%s", author);
                printf("请输入出版日期：");
                scanf("%s", date);
                add_book(title, author, date);
                printf("添加成功\n");
                break;
            case 2:
                printf("请输入要查找的关键词：");
                scanf("%s", keyword);
                find_book(keyword);
                break;
            case 3:
                printf("请输入要删除的图书标题：");
                scanf("%s", title);
                delete_book(title);
                printf("删除成功\n");
                break;
            case 0:
                return 0;
            default:
                printf("无效的选择，请重新输入。\n");
        }
    }

    return 0;
}