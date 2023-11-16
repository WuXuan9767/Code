#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 10, y = 20;
    swap(&x, &y); // 将x和y的地址传递给函数
    cout << x << " " << y << endl; // 20 10
    return 0;
}