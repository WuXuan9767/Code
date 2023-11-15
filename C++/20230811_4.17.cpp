#include <iostream>

int main()
{
    using namespace std;
    int nights = 1001;
    cout << "night value = ";
    cout << nights << ": location " << &nights << endl;

    int * pt = new int;
    *pt = 1001;
    cout << "pt = ";
    cout << *pt << ": location " << pt << endl;

    double *pd = new double;
    *pd = 10000001.0;
    cout << "pd = ";
    cout << *pd << ": location " << pd << endl;
    
    cout << "size of pt = " << sizeof pt << endl;
    cout << "size of *pt = " << sizeof *pt << endl;
    cout << "size of pd = " << sizeof pd << endl;
    cout << "size of *pd = " << sizeof *pd << endl;

    return 0;
}