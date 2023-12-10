#include<iostream>
using namespace std;

void bubble(int[],int);
void print(int arry[],int len);

int main(){
    int arry[]={2,334,45,23,4,2,3,45,32,4,423,34};
    int len=sizeof(arry)/sizeof(int);
    print(arry,len);
    bubble(arry,len);
    print(arry,len);
}

void bubble(int a[],int size){
    int i,temple;
    for (int pass =1;pass<size;pass++){
        for(i=0;i<size-pass;i++){
            if(a[i]>a[i+1]){
                temple =a[i];
                a[i]=a[i+1];
                a[i+1]=temple;
            }
        }
    }
}

void print(int arry[],int len){
    for (int i =1;i<len;i++){
        cout<<arry[i]<<",";
    }
    cout <<endl;
}