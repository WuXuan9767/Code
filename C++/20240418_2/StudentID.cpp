//StudentID. cpp
# include <iostream>
# include <string.h>
# include "StudentID.h"
using namespace std;
StudentID::StudentID() {
	cout << "\t" << "���ù��캯�� StudentID()" << endl;
}
StudentID::StudentID(int id) {
	cout << "\t" << "���ù��캯�� StudentID(" << id << ")" << endl;

	if (isValid())
		value = id;
}
StudentID::~StudentID() {
	cout << "���� StudentID:" << value << endl;
}
void StudentID::print() {
	cout << value << endl;
}
bool StudentID::isValid() {
	//�������ж�ѧ���Ƿ���ϱ������Ĵ���
	return true;
}