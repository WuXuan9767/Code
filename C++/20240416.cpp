#include<stdio.h>
#include<math.h>

int main(){
    double all=0,pi=0;
    for(int i=1;1.0/(i*i)>1E-15
    ;i++){
        all+=1.0/(i*i);
    }
    pi=sqrt(6.0*all);
    printf("%lf",pi);
}