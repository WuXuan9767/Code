//Person. cpp
#include < iostream >
#include < string.h>
#include "Sport.h"
#include "Person.h"
using namespace std;

Person::Person() {
	for (int i = 0; i < 5; i++)
		sport[i] = NULL;
}
Person::Person(const  char* pName) {
	strncpy_s(name, pName, sizeof(name));
	name[sizeof(name) - 1] = '\0';
	for (int i = 0; i < 5; i++)
		sport[i] = NULL;
}
Person::~Person() {
}
bool Person::like(Sport * likeSport) {
	int i = 0;
	while (i < 5 && sport[i])
		i++;
	if (i < 5) {
		sport[i] = likeSport;
		return true;
	}
	else{
		return false;
	}
}
					
Sport** Person::likedSport() {
	return sport;
}
void Person::print(){
	cout << name;
	cout << "Ï²»¶\n";
	for (int i = 0; i < 5; i++)
		sport[i]->print();
}
					