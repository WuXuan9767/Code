#include<iostream>
using namespace std;

int main(){
    int N;
    float i=1,t=-1;
    cin >> N;
    float ln2=0;
    while(i<N){
        t*=-1;
        ln2+=t/i;
        i++;
    }
    cout << "ln(2)≈"<<ln2;
}