#include "Ring.h"
#include "Boy.h"
#include "Jose.h"
#include <iostream>
using namespace std;
int main() {

	int m, n;
	cout << endl << "请输出小孩数和间隔数" <<endl;
	cin >> n >> m;
	Jose js1(n, m);
	js1.gameBegin().print();
	cout << endl << "现在宣布" << endl
		<< "获胜者是：" << endl;
	js1.gameBegin().print();
}