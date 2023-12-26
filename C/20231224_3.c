#include <stdio.h>

int add(int a, int b){
    return a+b;
}
int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    z=add(x,y);
    printf("%d",z);
}