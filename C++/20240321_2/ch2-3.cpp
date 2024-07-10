
#include "Point.h"
#include<iostream>
using namespace std;
void main() {
	double x, y;
	cout << "输入 x 和y：\n";
	cin >> x >> y;
	Point p(x, y);
	cout << "极坐标：Point(" << p.angle() << "," << p.radius() << ")" << endl;
	cout << "直角坐标：Point(" << p.xOffset() << "，" << p.yOffset() << ")" << endl;
}