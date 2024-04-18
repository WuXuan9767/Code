#include <iostream>
#include <bitset>
using namespace std;
int main(){
    short b=0;
    unsigned short a=b-1;
    b-=1;
    cout <<b<<endl<<a<<endl;
    cout <<bitset<32>(b)<<endl<<bitset<32>(a)<<endl;
    short *p=&b;
    cout <<p;
    int scores [3][3]={
        {100,100,10},
        {90,50,100},
        {60,70,80}
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< scores[i][j];
        }
        cout<<endl;
    }
}