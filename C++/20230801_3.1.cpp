#include <iostream>
#include <climits>

int main (void)
{
    using namespace std;
    
    short n = SHRT_MAX;
    int n1 = INT_MAX;
    long n11 = LONG_MAX;
    long long n111 = LLONG_MAX;
    
    cout << "short is: "<< sizeof(short) << "bytes."<< endl;
    cout << "int is: "<< sizeof(int) << "bytes."<< endl;
    cout << "long is: "<< sizeof(long) << "bytes."<< endl;
    cout << "long long is: "<< sizeof(long long) << "bytes."<< endl << endl;

    cout << "short is: "<< sizeof n << "bytes."<< endl;    //2字节不是2^16=65536吗？怎么32767也是2字节
    cout << "int is: "<< sizeof n1 << "bytes."<< endl;      //有无符号
    cout << "long is: "<< sizeof(n11) << "bytes."<< endl;
    cout << "long long is: "<< sizeof(n111) << "bytes."<< endl << endl;

    cout << "short: "<< n << endl;
    cout << "int: " << n1 << endl;
    cout << "long: " << n11 << endl;
    cout << "long long: " << n111 << endl << endl;

    int a=5; //单值用这个（C语言语法）
    int b(6);
    int c{7};
    int d = {8};

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}