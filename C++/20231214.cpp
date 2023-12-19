#include<iostream>
using namespace std;

int main(){
    char* language[]={"C","C++","Java","Python","C#"};
    for (int i=0;i<5;i++){
        int j=0;
        while(language[i][j]){
            cout <<language[i][j++];
        }
        cout <<endl;
    }
}