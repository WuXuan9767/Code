# include "Sport.h"
# include "Person.h"
using namespace std;
int main() {
	Sport s1("×ãÇò");
	Sport s2("ÀºÇò");
	Sport s3("Æ¹ÅÒÇò");
	Sport s4("Ìø¸ß");
	Sport s5("ÍøÇò");

	Person pl("ÕÅÈı");
	pl.like(&s1);
	pl.like(&s2);
	pl.like(&s3);
	pl.like(&s4);
	pl.like(&s5);
	pl.print();

	Person p2("ÀîËÄ");
	p2.like(&s4);
	p2.like(&s3);
	p2.like(&s2);
	p2.like(&s1);
	p2.like(&s5);
	p2.print();
}