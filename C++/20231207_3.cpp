#include<iostream>
using namespace std;
int main(){
    const int num =7;
    int boy[num];
    int i;

    for(i=0;i<num;i++){
        boy[i]=i+1;
        cout <<boy[i]<<",";
    }
    int m;
    cout <<endl;
    cin >> m;

    
    i=0;
    int n=num;

    while(n>1){
        int j=m;
        do{
            i=(i+1)%num;
            while(boy[i]==0){
                i=(i+1)%num;
            }
            j--;
        }while(j>1);

        cout <<"第"<<boy[i]<<"小孩离开了\n";
        boy[i]=0;
        i=(i+1)%num;
        while(boy[i]==0){
            i=(i+1)%num;
        }
        n--;  
    }

    for (int i=0;i<num;i++){
        if(boy[i]!=0){
            cout <<"最后剩下了第"<<boy[i]<<"个小孩\n";
            break;
        }
    }
}