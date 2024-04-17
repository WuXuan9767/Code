#include<iostream>
#include<string.h>
using namespace std;

class Person{
public:
    Person(const char nameV[],bool sexV,int ageV,float heightV,float weightV){
        strncpy(name,nameV,sizeof(name));
        sex=sexV;
        age=ageV;
        height =heightV;
        weight=weightV;
        cout<< "构造：我知道怎样设置人的属性，我已完成！"<<endl;
    }
    ~Person(){
        cout<< "析构："<<name<<endl;
    }
    void print(){
        cout <<"我是一个人，我的属性值为："<<name<<","<<sex<<","<<age<<","<<height<<","<<weight<<endl;
    }

private:
    char name[20];
    bool sex;
    int age;
    float height;
    float weight;    
};

Person p1("张三",1,18,180.5,65.3);

int main(){
    p1.print();
    Person p2("李四",0,16,165,46.5);
    p2.print();

}