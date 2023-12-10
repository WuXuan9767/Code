#include<iostream>
using namespace std;

int main(){
    int k = 1, s = 0, t = 1, n;
    cin >> n;
    cout << "k" << "\t" << "t" << "\t" << "s" << endl;
    for(k=1;k <= n;k++){
        t *= k;//阶乘
        s += t;//累加
        cout << k << "\t" << t << "\t" << s << endl;
    }
    cout << s;
}