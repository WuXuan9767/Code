#include <iostream>
#include <string.h>
#include "Tdate.h"
#include "Person.h"

using namespace std;

int main() {
	Tdate d1(5, 6, 2004);
	Tdate d2(7, 9, 2005);

	Person p1("Xuan", d1);
	p1.print();
}
