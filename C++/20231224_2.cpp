#include<iostream>
using namespace std;
void strTrans(char*src,char*dst){
    for(int i=0;i<20;i++){
        dst[i]=(char)(((int)src[i])+1);
        cout << dst[i];
    }
}
int main(){
    char s[20],d[20];
    cin >> s;
    strTrans(s,d);
}