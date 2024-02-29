#include<iostream>
using namespace std;
char a[10];
int main(){
    cout<< "请输入："<<endl;
    cin >>a;
    int num=0;
    int chinese=0;
    int charat=0;
    for(int i;i<10;i++){
        int b=int(a[i]);
        if (48 <= b && b <= 57){
            num++;
        }
        else if ((65 <= b && b<= 90)||(97<= b && b <=122) )
        {
            charat++;
        }
        else if (b >= 0x4E00 && b<= 0x9FA5)
        {
            chinese++;
        }
    }
    cout<< "汉字"<<chinese<<endl;
    cout<< "数字"<<num<<endl;
    cout<< "英文"<<charat<<endl;

    
}