
#include "Point.h"
#include<iostream>
using namespace std;
int main() {
	double a, r;
	cout << "���� a ��r��\n";
	cin >> a >> r;
	Point p(a, r);
	cout << "�����꣺Point(" << p.angle() << "," << p.radius() << ")" << endl;
	cout << "ֱ�����꣺Point(" << p.xOffset() << "��" << p.yOffset() << ")" << endl;
}