#include<iostream>
#include<string.h>
using namespace std;

int max(const void * a,const void * b){
    return strcmp((*(char**)a),(*(char**)b));
}

void print(char *array[],int len){
    for(int i=0;i<len;i++){
        cout <<array[i]<<endl; 
    }
    cout<<endl;
}

int main(){
    char *a[]={"enter","number","size","begin","of","cat","case","program","certain","a"};
    int num =sizeof(a)/sizeof(a[0]);
    int size =sizeof(a[0]);
    qsort(a,num,size,max);

    print(a,num);

}