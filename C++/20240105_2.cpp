#include<iostream>
using namespace std;
void print(int (*a)[4]);
int print(int *a);
int main(){
    int a[3][4]={12,324,5,344,2,423,780,56,7,6,8768,99};
    int b[]={12,324,5,344,2,423,780,56,7,6,8768,99};
    print(a);
    print(b);
    cout <<*(*(a+2)+1)<<endl;
    cout <<*b+1<<endl;
}
void print(int (*arr)[4]){
    cout <<*(*(arr+2)+1)<<endl;
}
int print(int *a){
    cout << a[1]<<endl;
    return 1;
}