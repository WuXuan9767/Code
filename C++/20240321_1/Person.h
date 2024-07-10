#pragma once
class Person
{
public:
	Person(const char nameV[], bool sex, int ageV, float heightV, float weightV);
	~Person();
	void print();
	void eat(char obj[]);
	void sleep(void);

private:
	char name[20];
	bool sex;
	int age;
	float weight;
	float height;
};