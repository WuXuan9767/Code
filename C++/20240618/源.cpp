#include "Ring.h"
#include "Boy.h"
#include "Jose.h"
#include <iostream>
using namespace std;
int main() {

	int m, n;
	cout << endl << "�����С�����ͼ����" <<endl;
	cin >> n >> m;
	Jose js1(n, m);
	js1.gameBegin().print();
	cout << endl << "��������" << endl
		<< "��ʤ���ǣ�" << endl;
	js1.gameBegin().print();
}