#include <iostream>
using namespace std;
unsigned add(unsigned a,unsigned b){
    if (b==0){
        return a;
    }
    int sum,carry;
    sum= a^b;
    carry= (a&b)<<1;
    return add(sum,carry);
}
int main(){
    signed a,b;
    cin>>a>>b;
    cout <<"a+b="<<add(a,b)<<endl;
    system("pause");
}