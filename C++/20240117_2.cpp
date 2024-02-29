#include<iostream>
#include<iomanip>

#include<bitset>
using namespace std;

void findmin(int*a,int n,int&index){
    index=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[index]){
            index=i;
        }
    }
}

int main(){
    // int a[6]={2,343,656,33,6,744};
    // int minIndex;
    // findmin(a,6,minIndex);
    // cout <<minIndex<<endl<<a[minIndex]<<endl;
    short y=-16;
    cout<<y<<endl;
    cout<<bitset<10>(y)<<endl;
    cout<<hex<<y<<endl;
    y=y>>4;
    cout<<dec<<y<<endl;
    cout<<bitset<10>(y)<<endl;
    cout<<hex<<y;
}