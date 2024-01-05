#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    double all=0,n=1;
    int j=1;
    while((1/(3*n-2))>1e-6){
        all+=j/(3*n-2);
        j*=-1;
        n++;
    }
    cout <<n<<endl<<setprecision(80)<<all;
}