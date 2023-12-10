#include<iostream>
using namespace std;

int main(){
    int x=0,y=0;
    cout << "x=";
    cin >> x;
    if(x<=0){
        y=1;
    }
    else if(x>10){
        y=120;
    }
    else{
        y=3*x*x;
    }
    cout << "y="<<y;
}