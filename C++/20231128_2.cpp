#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long a,b;
    cout << "请输入范围：\n";
    cin >> a>> b;
    cout << "从" << a << "到" <<b<<"范围内的素数有：\n";

    int sqrtml;
    bool flag;
    if (a%2==0)
        a++;
    for (int n=a;n<=b;n+=2)
    {
        sqrtml=sqrt(n);
        flag=true;
        for(int i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
                flag=false;
                break;
            }
        }

    if(flag)
        cout << "," << n;
    }
}