#include<iostream>
using namespace std;

void strComb(char *dest,const char*src,int index){
    char a[20];
    char *c=a,*b=dest,*d=a;

    while(*c=*b){
        c++;
        b++;
    }
    cout<<a<<endl;
    for(int i=0;i<index;i++){
        dest++;
        d++;
    }
    while(*dest=*src){
        dest++;
        src++;
    }
    while(*dest=*d){
        dest++;
        d++;
    }

}

int main(){
    char s1[20]={"This apple."};
    cout<<int(s1[17])<<endl;
    char s2[20]={"is an "};
    strComb(s1,s2,5);
    cout<<s1<<endl;
    cout<<int(s1[17])<<endl;
}

