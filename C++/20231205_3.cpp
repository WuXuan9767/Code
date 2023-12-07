#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a[3][4];
    for(int i=0;i<3;i++)\
    {
        for(int j=0;j<4;j++){
            a[i][j]=i*10+j;
        }    
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout <<setw(2)<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}