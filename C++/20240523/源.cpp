#include <iostream>
using namespace std;

class Point {
private:
	double x;
	double y;
public:
	Point(double dx, double dy) {
		cout << "����Point(" << dx << "," << dy << ")" << endl;
		x = dx;
		y = dy;
	}
	~Point() {
		cout<< "����Point(" << x << "," << y << ")" << endl;
	}
}; Point g(0, 0);
void fn() {
	static Point sf(1, 1);
	Point f(2, 2);
}
int main() {
	cout << endl << "��һ�ε���fn()����" << endl;
	fn();
	cout << endl << "�ڶ��ε���fn()����" << endl;
	fn();
	cout << endl << "�˳�main()����" << endl;
}