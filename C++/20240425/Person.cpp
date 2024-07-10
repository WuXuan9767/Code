#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string.h>
#include "Tdate.h"
#include "Person.h"

using namespace std;
Person::Person() {
}
Person::Person(const char n[], Tdate d) {
	int len = strlen(n);
	name = new char[len + 1];
	strncpy(name, n, len + 1);
	name[len] = '\0';
	birthday = new Tdate(d);
}
Person::~Person() {
	delete name;
	delete birthday;
}
void Person::print() {
	cout << "Person:" << name << ",";
	birthday->print();
}
Tdate Person::getBirthday() const {
	return Tdate(*birthday);
}