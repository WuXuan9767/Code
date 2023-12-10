#include<iostream>
#include<iomanip>
using namespace std;
const int arow=3, acol=4;
int a[arow][acol]={
    {12,23,66,75},
    {22,33,52,79},
    {23,78,66,456}
};
const int brow=4, bcol=5;
int b[brow][bcol]={
    {12,675,66,33,4},
    {2,4,76,45,34},
    {3,886,88,43,66},
    {86,8,56,65,8}
};
const int crow=3, ccol=5;
int c[crow][ccol];
int main(){
    if ((acol==brow)&&(crow==arow)&&(ccol==bcol)){
        for (int i=0;i<crow;i++){
            for(int j=0;j<ccol;j++){
                c[i][j]=0;
                for(int k=0;k<acol;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
                cout<<setw(9)<<c[i][j];
            }
            cout<<endl;
        }
    }
    else{
        cout<<"!";
    }
}
