#include<iostream>
using namespace std;
int main(){
    int i=0;
    const int c=1;
    int &c=i;
    
    int*ptr =&i;
    const int *cptr=&i;

    int *const pctr=&i;

    i=23434;
    
    i=435;
}