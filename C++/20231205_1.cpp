#include<iostream>
using namespace std;

int main(){

    int iA[10]={0,1};
    for (int i=2;i<10;i++){
        iA[i]=iA[i-1]+iA[i-2];
    }
    for (int i=0;i<10;i++){
        cout << iA[i]<<",";
    }
}