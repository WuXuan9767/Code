#include<iostream>
using namespace std;
struct Boy{
    int codo;
    Boy*pNext;
};

Boy*pNow;
Boy*pFirst;
Boy*pivot;
void deletep(){
    pivot->pNext=pNow->pNext;
    cout << "第"<<pNow->codo<<"小孩离开了"<<endl;
    delete pNow;
    pNow=pivot->pNext;
}
int main(){
    int number=20;
    int interval=7;
    cout<< "请输入小孩个数"<<endl;
    //cin >> number;
    cout<< "请输入间隔数"<<endl;
    //cin >>interval;

    pFirst=new Boy;
    pFirst->codo=1;
    pFirst->pNext=NULL;
    pNow=pFirst;
    for(int i=1;i<number;i++){
        pivot=pNow;
        pNow=new Boy;
        pNow->codo=i+1;
        pivot->pNext=pNow;
    }
    pNow->pNext=pFirst;

    pNow=pFirst;
    int a=1;
    while(pNow->pNext!=pNow){
        if(a<interval){
            pivot=pNow;
            pNow=pNow->pNext;
            a++;
        }
        else{
            deletep();
            a=1;
        }
    }
    cout << "第"<<pNow->codo<<"小孩获胜了"<<endl; 
}