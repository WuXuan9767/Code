#include<iostream>
#include"Person.h"
using namespace std;
Person p1("����", 1, 18, 180.5, 65.3);

int main() {
    p1.print();
    Person p2("����", 0, 16, 165, 46.5);
    p2.print();

}