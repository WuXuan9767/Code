#include<iostream>
using namespace std;

int main(){
    char ch[10];
    cin.get(ch,10);

    int i=0;
    while(i<10)
    {
        cout <<ch[i];
        i++;
    }
    cout <<endl;
}