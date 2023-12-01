#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void main()
{
    int n =1;
    double a=0,b=1;
    double h,Tn,T2n,In,I2n;
    const double eps =1e-8;

    h=b-a;
    double fa =exp(a)/(1+a*a);
    double fb =exp(b)/(1+b*b);
    T2n = I2n =h*(fa+fb)/2;
    In=0;

    while (fabs(I2n-In)>=eps)
    {
        double sigma =0.0;
        for (int i=0;i<n;i++)
        {
        double x=a+ (i+0.5)*h;
        sigma += exp(x)/(1+x*x);
        }
    }
}