#include <iostream>
#include"Tdate.h"

using namespace std;

Tdate::Tdate() {
}

Tdate::Tdate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
	cout << "���죺";
	print();
}

Tdate::~Tdate() {
	cout << "������";
	print();
}
Tdate::Tdate(const Tdate& oldTdate) {
	cout << "�������죺";
	oldTdate.print();
	memcpy(this, &oldTdate, sizeof(Tdate));
}
void Tdate::print() const {
	cout << month << "/" << day << "/" << year << endl;
}

