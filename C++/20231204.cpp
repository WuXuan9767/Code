#include<iostream>
using namespace std;
int main(){
    static int a[]={1,2,4,8,16};
    cout <<"内存大小"<<sizeof(a)<<endl;
    cout <<"机器字长"<<sizeof(int)<<endl;
    cout <<"元素个数"<<sizeof(a)/sizeof(int)<<endl;    
}