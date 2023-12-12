#include<iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    for (int i=0; i<10; i++){
        cout << a[i] << ",";
    }
    cout << endl;
    for (int *ip=a; ip<10+a; ip++){
        cout << *ip << ",";
    }
    cout << endl;
}