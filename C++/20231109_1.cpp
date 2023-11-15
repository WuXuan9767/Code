#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout  << "plase input the key to hear a bell.\n";
    char ch = getchar();
    if (ch == 'b')
    {
    cout << "\a" <<"bell";
    } 
    else
    {
        cout << "no bell";
    }
}