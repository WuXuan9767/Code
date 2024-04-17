#include<iostream>
#include<string.h>
using namespace std;

class person{
    public:
    char name[100];
    bool sex;
    int age;
    double heigth;
    double weight;
    char nation[100];
    char education[100];
    };

int main(){
    person p1;
    strncpy(p1.name,"张三",sizeof(p1.name));
    p1.sex=1;
    p1.age=18;
    p1.age=180.5;
    


  
}