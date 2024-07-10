//Sport.cpp
# include < iostream >
#include < string.h>
# include "Sport.h"
using namespace std;
Sport::Sport() {
}
Sport::Sport(const char * pName) {
	strncpy_s(name, pName, sizeof(name));
	name[sizeof(name) - 1] = '\0';
}
void Sport::print() {
	cout << name << endl;
}
Sport::~Sport(){
}