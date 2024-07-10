#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    for(a=3;a<=100;a++){
        c=0;
        for (b=2;b<a;b++){
            if(a%b==0){
                c=1;
            }
        }
        if(c==0){
            printf("%d\n",a);
        }
    }
}