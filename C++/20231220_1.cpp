#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int* ptr=NULL, * array =(int*) new int[][4]{1,2,3,4,5,6,7,8,9,10,11,12,13};
	ptr = array;
	for (int i = 1; ptr < array+16; i++) {
		cout << setw(2) << *ptr;
		if (i % 4 != 0)
			cout << ",";
		else
			cout << endl;
		ptr++;
	}
}
