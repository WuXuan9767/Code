#include<iostream>
using namespace std;

int compute(int a){
    return a/10+a%10;
}

int max(const void * a,const void * b){
    int a1=compute(*(int*)a);
    int b1=compute(*(int*)b);
    if (a1>b1){
        return 1;
    }
    else{
        return -1;
    }
}



int main(){
    int a[]={12,32,42,51,8,16,21,19,9};
    int num =sizeof(a)/sizeof(int);
    int size =sizeof(a[0]);
    qsort(a,num,size,max);
    for(int i=0;i<num;i++){
        cout <<a[i]<<" ";
    }
    
}