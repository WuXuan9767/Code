#include<iostream>
#include<iomanip>
using namespace std;

struct Boy{
    int code;
    Boy *pNext;
};

Boy*pFirst=0;
Boy*pCurrent=0;
Boy*pivot=0;

int main (){
    int numOfBoy,m;
    cin>> numOfBoy>>m;

    pFirst =new Boy;
    pFirst->code=1;
    pFirst->pNext=NULL;
    pCurrent=pFirst;

    for(int i=1;i<numOfBoy;i++){
        pivot=pCurrent;
        pCurrent=new Boy;
        pCurrent->code=i+1;
        pivot->pNext=pCurrent;
    }
    pCurrent->pNext=pFirst;

    cout <<setw(4)<< pFirst->code;
    pCurrent=pFirst->pNext;
    while (pCurrent!=pFirst){
        cout <<setw(4)<< pCurrent->code;
        pCurrent=pCurrent->pNext;
    }
    cout <<endl;
    
    pCurrent=pFirst;
    int j;
    while(pCurrent->pNext !=pCurrent){
        j=m;
        do{
            pivot=pCurrent;
            pCurrent=pCurrent->pNext;
            j--;
        }while(j>1);

        cout <<setw(4)<<pCurrent->code;
        pivot->pNext=pCurrent->pNext;
        delete pCurrent;
        pCurrent=pivot->pNext;
    }

    cout <<endl<<pCurrent->code<<endl;
    delete pCurrent;

}