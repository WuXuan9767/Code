#include "Boy.h"
#include <iostream>
using namespace std;
Boy::Boy(Boy* pPosition, int id){
	code=id;
	if (!pPosition) {
		this->pNext = this;
	}
	else {
		this->pNext = pPosition-> pNext;
			pPosition->pNext = this;
	}
}
void Boy::leave(Boy* pPosition) {
	pPosition->pNext=this->pNext;
	cout << "�뿪��" << code << endl;
}
void Boy::print() {
	cout << "Id:" << code;
}
Boy::~Boy() {

}
Boy* Boy::next() {
	return pNext;
}