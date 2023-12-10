#include<iostream>
using namespace std;
int main(){
    //定义一个二维数组
    int a[3][4]; 
    int i=0,j=0;
    while (i< 3){ //对行循环
        j=0;
        while (j< 4){//对列循环
            a[i][j] = i * 10 + j; //对 i 行 j 列元素赋值
            cout << a[i][j];//输出数组的值
            j++;
        }
        cout << endl;
        i++;
    }
}