# include "Sport.h"
class Person{
public:
	Person();
	Person(const  char* pName);
	~Person();
	bool like(Sport* likeSport);
	Sport** likedSport();
	void print();
private:
	char name[20];
	Sport* sport[5];
};
//Sport,cpp