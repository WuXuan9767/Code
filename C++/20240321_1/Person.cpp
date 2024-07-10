#include<iostream>
#include<string.h>
#include"Person.h"
using namespace std;
Person::Person(const char nameV[], bool sexV, int ageV, float heightV, float weightV) {
    strncpy_s(name, nameV, sizeof(name));
    sex = sexV;
    age = ageV;
    height = heightV;
    weight = weightV;
    cout << "构造：我知道怎样设置人的属性，我已完成！" << endl;
}
Person::~Person() {
    cout << "析构：" << name << endl;
}
void Person::print() {
    cout << "我是一个人，我的属性值为：" << name << "," << sex << "," << age << "," << height << "," << weight << endl;
}


