#include<iostream>
using namespace std;
int maxium (int [][4],int ,int );

int main(){
    int sg[3][4]={
        {23,56,78,67},
        {89,96,67,99},
        {89,78,67,79}
    };
    cout << maxium(sg,3,4)<<endl;
}

int maxium (int grade[][4],int pup,int tests){
    int max =0;
    for(int i=0;i<pup;i++){
        for (int j=0;j<tests;j++){
            if(grade[i][j]>max){
                max=grade[i][j];
            }
        }
    }
    return max;
}