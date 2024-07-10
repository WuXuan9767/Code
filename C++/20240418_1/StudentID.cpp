//StudentID. cpp
# include < iostream>
# include < string.h>
# include "StudentID.h"
using namespace std;
StudentID::StudentID() {
	cout << "\t" << "调用构造函数 StudentID()" << endl;
}
StudentID::StudentID(int id){
cout << "\t" << "调用构造函数 StudentID("<< id << ")" << endl;

if (isValid())
	value = id;
}
StudentID::~StudentID() {
	cout << "析构 StudentID:" << value << endl;
}
void StudentID::print() {
	cout << value << endl;
}
bool StudentID::isValid() {
	//可增加判断学号是否符合编码规则的代码
	return true;
}