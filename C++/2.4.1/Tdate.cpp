#include<iostream>
#include"Tdate.h"
using namespace std;

Tdate::Tdate() {

}

Tdate::Tdate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
	cout<<"���죺"<<this<<"->;"
	print();
}

Tdate::Tdate(const Tdate& oldTdate) {

}
bool Tdate::getDate(int& d, int& m, int& y) const {
	d = day;
	m = month;
	y = year;
	return true;
}
void Tdate::print() const {
	cout<<"���죺 
		"

}
Tdate add(int id);
~Tdate();