#include <iostream>
#include <string.h>
#include "StudentID.h"
#include "Student.h"
using namespace std;

Student::Student() {
	cout << "���ù��캯��Student()" << endl << endl;
}

Student::Student(int id) :studentID(id) {
	cout << "���ù��캯�� Student(" << id << ")" << endl << endl;
}

Student::Student(int id,const char* pName) :studentID(id)
{
	cout << "���ù��캯�� Student(" << id << "��" << pName
		<< ")" << endl << endl;
	strncpy_s(name, pName, sizeof(name));
	name[sizeof(name) - 1] = '\0';
}

Student::Student(int id,const char* pName, int xHours, float xgpa) :studentID(id) {
	cout << "���ù��캯�� Student(" << id << "��" << pName
		<< "," << xHours << "��" << xgpa
		<< ")" << endl << endl;
	strncpy_s(name, pName, sizeof(name));
	name[sizeof(name) - 1] = '\0';
	semesHours = xHours;
	gpa = xgpa;
}

Student::~Student() {
	cout << "���� Student : ";
	studentID.print();
}
