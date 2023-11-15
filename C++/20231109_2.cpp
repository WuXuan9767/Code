#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char ch;
    ch ='d';
    cout << setw(8)<<setfill('@')<<ch;
}