#include <iostream>
using namespace std;

class Point {
private:
	double x;
	double y;
public:
	Point(double dx, double dy) {
		cout << "调用Point(" << dx << "," << dy << ")" << endl;
		x = dx;
		y = dy;
	}
	~Point() {
		cout<< "析构Point(" << x << "," << y << ")" << endl;
	}
}; Point g(0, 0);
void fn() {
	static Point sf(1, 1);
	Point f(2, 2);
}
int main() {
	cout << endl << "第一次调用fn()函数" << endl;
	fn();
	cout << endl << "第二次调用fn()函数" << endl;
	fn();
	cout << endl << "退出main()函数" << endl;
}