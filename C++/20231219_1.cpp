#include<iostream>
using namespace std;

void print(int array[],int len){
    for (int i=0;i<len;i++){
        cout <<array[i]<<",";
    }
    cout <<endl;
}
bool ascending (int a,int b){
    return (a>b ? true : false);
}

bool descending (int a,int b){
    return (a<b ? true : false);
}

void bubble(int a[],int size,bool(*fp)(int a,int b)){
    int i,temp;
    for (int pass =1;pass<size;pass++){
        for (i=0;i<size-pass;i++){
            if (fp(a[i], a[i+1])){
                temp =a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }    
        }
        print(a,size);
    }
}


int main(){
    int array[]={23,3,32,4,546,7657,788};
    int len=sizeof(array)/sizeof(int);

    cout <<"初始"<<endl;
    print(array,len);
    cout <<"sunxv"<<endl;
    bubble(array,len,ascending);
    print(array,len);
    cout <<"daoxv"<<endl;
    bubble(array,len,descending);
    print(array,len);
}
