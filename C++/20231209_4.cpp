#include<iostream>
using namespace std;

int main(){
    float k=1,all=0;
    while(k<11){
        all+=1/(k*(k+1));
        k++;
    }
    cout<<all;
}