#include<iostream>
using namespace std;

class person{
private:
    char name[20];
    int height;
    int weight;
    bool sex;
    int age;
public:
    char* get_name(){
        return name;
    }
    int get_height(){
        return height;
    }
    int get_weight(){
        return weight;
    }
    bool get_sex(){
        return sex;
    }
};

int main(){
    person p1;
    p1.get_name();

}