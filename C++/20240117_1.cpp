#include<iostream>
#include<iomanip>
using namespace std;

struct Volunteer
{
    unsigned int code;
    float time;
};

Volunteer* find(Volunteer volb[],int n,int no){
    for(int i=0;i<n;i++){
        if(volb[i].code==no){
            return &volb[i];
        }
    }
}

void sort(Volunteer volb[],int n){
    for (int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(volb[j].time<volb[j+1].time){
                Volunteer temp;
                temp=volb[j];
                volb[j]=volb[j+1];
                volb[j+1]=temp; 
            }
        }
    }
}

int main(){
    Volunteer *ptr=(Volunteer *)malloc(6*sizeof(Volunteer));
    for(int i=0;i<6;i++){
        ptr[i].code=i+1;
        ptr[i].time=i+1;
    }
    for(int i=0;i<6;i++){
        cout<< ptr[i].code<<setw(5)<<ptr[i].time<<endl;
    }
    Volunteer finded=*(find(ptr,6,3));
    cout<<finded.code<<setw(5)<<finded.time<<endl;
    sort(ptr,6);
    for(int i=0;i<6;i++){
        cout<< ptr[i].code<<setw(5)<<ptr[i].time<<endl;
    }

}