#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
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
    // Tn=T2n;
    // In=I2n;
    int t=0;
    while (fabs(I2n-In)>=eps)
    {
        double sigma =0.0;
        for (int i=0;i<n;i++)
        {
        double x=a+ (i+0.5)*h;
        sigma += exp(x)/(1+x*x);
        }   
        Tn=T2n;
        In=I2n;
        T2n =(Tn+h*sigma)/2.0;
        I2n = (4*T2n-Tn)/3.0;

        n*=2;
        h/=2;
        t++;
        cout <<sigma<<endl;
    }
    cout <<t<< "The integral of f(x) from "<<a<<" to "<<b<<"is \n"
        <<setiosflags(ios::fixed)<<setprecision(8)<<setw(10)<<I2n<<endl;
}