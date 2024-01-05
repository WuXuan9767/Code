#include <iostream>
using namespace std;

int main(){
    int s=1,i=1,n;
    cin >>n;
    while (i<=n){
        s*=i;
        i++;
    }
    cout<<s;
    system("pause");
}