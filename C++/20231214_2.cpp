#include<iostream>
using namespace std;
int* createArray(int size){
    int *ptr;
    ptr=new int[size];
    for (int i =0;i<size;i++){
        *(ptr+1)=i;
    }
    return ptr;
}

void printArray(int a[],int len){
    for (int i=0;i<len;i++){
        cout << a[i]<<",";
    }
    cout <<endl;
    
}
int main(){
    int row =4;
    int *array;
    array=createArray(row);
    printArray(array,row);
    delete[]array;
}