# include "Sport.h"
# include "Person.h"
using namespace std;
int main() {
	Sport s1("����");
	Sport s2("����");
	Sport s3("ƹ����");
	Sport s4("����");
	Sport s5("����");

	Person pl("����");
	pl.like(&s1);
	pl.like(&s2);
	pl.like(&s3);
	pl.like(&s4);
	pl.like(&s5);
	pl.print();

	Person p2("����");
	p2.like(&s4);
	p2.like(&s3);
	p2.like(&s2);
	p2.like(&s1);
	p2.like(&s5);
	p2.print();
}