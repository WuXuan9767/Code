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
    cout << "���죺��֪�����������˵����ԣ�������ɣ�" << endl;
}
Person::~Person() {
    cout << "������" << name << endl;
}
void Person::print() {
    cout << "����һ���ˣ��ҵ�����ֵΪ��" << name << "," << sex << "," << age << "," << height << "," << weight << endl;
}


