#include<iostream>
using namespace std;

int od(int i);

int main()
{
    int n,sn;


    cin >> n;
    sn=od(n);
    cout << sn <<endl;
}

int od(int i)
{
    int r=1;
    i++;
    r*=(2*i-1);
    return r;
}