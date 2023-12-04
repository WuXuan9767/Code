#include <iostream>
using namespace std;

int num = 10;  // 全局变量
void xxx();
void func()
{
    int num = 20;  // 局部变量，与全局变量同名
    cout << "In func, num is " << num << endl;
}

int main() {
    cout << "In main, num is " << num << endl;
    func();
    int num =15;
    cout << "Back in main, num is still " << num << endl;
    xxx();
    return 0;
}

void xxx(){
    cout << num;
}