#include<iostream>
using namespace std;

void strCopy(char dest[], char source[]){
        int i=0;
    while(source[i] != 0){
            dest[i]=source[i];
            i++;
        }
        dest[i] = '\0';
}

int main(){
    char a[20]={"asdfsfgs"};
    char b[20];
    strCopy(b,a);
    cout <<b<<endl<<a<<endl;
    cout <<rand();
}
