
#include "Point.h"
#include<iostream>
using namespace std;
void main() {
	double x, y;
	cout << "���� x ��y��\n";
	cin >> x >> y;
	Point p(x, y);
	cout << "�����꣺Point(" << p.angle() << "," << p.radius() << ")" << endl;
	cout << "ֱ�����꣺Point(" << p.xOffset() << "��" << p.yOffset() << ")" << endl;
}