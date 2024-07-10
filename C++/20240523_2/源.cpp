#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string.h>
using namespace std;
class Person //人
{
public:
	Person(const char nameV[], bool sexV, int ageV, float heightV, float weightV) {
		cout << "构造：我知道怎么设置人的属性，我已完成！" << endl;
		strncpy(name, nameV, sizeof(name)); //姓名
		sex = sexV; //性别
		age = ageV; //年龄
		height = heightV; //身高
		weight = weightV; //体重
	}

	~Person() {
		cout << "析构：" << name << endl;
	}
	void print() {
		cout << "我是一个人，我的属性值为：" << name << "," << sex << "," << age << ","
			<< height << "," << weight << endl;
	}
	void eat(const char obj[]) { //吃（东西)
		cout << "我是一个人" << name << "，但我还没有学会怎么吃。" << obj << endl;
	}
	void sleep(void) { //睡觉()
		cout << "我是一个人" << name << "，我会睡觉，但还说不清楚是怎么睡觉的。" << endl;
	}

public:
	char name[20]; //姓名
	bool sex;	//性别
	int age;	//年龄
	float height;	//身高
	float weight;	//体重
};

Person p1("张三", 0, 18, 180.5, 65.3);	//张三

Person p3;

int main() {
	p1.print();
	cout << endl;
	Person p2("李四", 1, 16, 165, 46.5);	//李四
	p2.print();

	p3.print();
}
