#include<iostream>
using namespace std;

int max(const void * a, const void * b){
    return (*(float*)a - *(float*)b);
}

int main(){
    float a[] = {32.1,456.87,462.0,98.12,451.79,340.12,54.55,99.87,72.5};
    int num = sizeof(a) / sizeof(int);
    int size = sizeof(a[0]);
    qsort(a, num, size, max);
    for(int i = 0; i < num; i++){
        cout << a[i] << " ";
    }
    
}