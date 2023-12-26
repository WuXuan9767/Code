#include<iostream>
using namespace std;

int main(){
    float a=0,n=1,i=1;
    while (1)
    {
        a+=i/(3*n-2);
        n++;
        i*=-1;
        cout <<a;
    }

}