#include <iostream>
using namespace std;

long fib(int x)
{
	if (x==1)
    {
		return 1;
    }
	else if (x == 0)
    {
		return 0;
    }
	else
    {
        return (fib(x - 1) + fib(x - 2));
    }
}

int main()
{
    int i;
    cin >> i;
    int j=1;
    while(j<=i)
    {
        cout <<fib(j)<<",";
        j++;
    }
}