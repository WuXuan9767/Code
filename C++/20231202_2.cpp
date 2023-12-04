#include<iostream>
using namespace std;


int n =10;
void f()
{
    n++;
    cout << "n="<< n <<endl;
    static int n =2;
    cout << "n:"<< n <<endl;
    n++;
    cout << "n:"<<n<<endl;
   
}
int main(){
    n++;
    cout << "n="<<n <<endl;
    int n =0;
    cout << "n="<<n <<endl;
    cout << "f"<<n <<endl;
    f();
    cout <<"f"<<endl;
    cout <<"n="<<n<<endl;
    f();
    cout << "n="<<::n<< endl;

}