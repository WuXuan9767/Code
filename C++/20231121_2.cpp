#include<iostream>
using namespace std;
int n=1;

void func()
{
    static int a;
    int b=5;
    a+=2;
    b+=5;
    n+=12;
    cout << "a="<<a;
    cout << " b="<<b;
    cout << " n="<<n<<endl;
}

int main()
{
    static int a;
    int b=-10;
    cout << "a="<<a;
    cout << " b="<<b;
    cout << " n="<<n<<endl;//a=0 b=-10 n=1
    func();                //a=2 b=10  n=13
    cout << "a="<<a;
    cout << " b="<<b;
    cout << " n="<<n<<endl;//a=0 b=-10 n=13
    func();                //a=4 b=10  n=25

}