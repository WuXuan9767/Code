#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string.h>
using namespace std;
class Person //��
{
public:
	Person(const char nameV[], bool sexV, int ageV, float heightV, float weightV) {
		cout << "���죺��֪����ô�����˵����ԣ�������ɣ�" << endl;
		strncpy(name, nameV, sizeof(name)); //����
		sex = sexV; //�Ա�
		age = ageV; //����
		height = heightV; //���
		weight = weightV; //����
	}

	~Person() {
		cout << "������" << name << endl;
	}
	void print() {
		cout << "����һ���ˣ��ҵ�����ֵΪ��" << name << "," << sex << "," << age << ","
			<< height << "," << weight << endl;
	}
	void eat(const char obj[]) { //�ԣ�����)
		cout << "����һ����" << name << "�����һ�û��ѧ����ô�ԡ�" << obj << endl;
	}
	void sleep(void) { //˯��()
		cout << "����һ����" << name << "���һ�˯��������˵���������ô˯���ġ�" << endl;
	}

public:
	char name[20]; //����
	bool sex;	//�Ա�
	int age;	//����
	float height;	//���
	float weight;	//����
};

Person p1("����", 0, 18, 180.5, 65.3);	//����

Person p3;

int main() {
	p1.print();
	cout << endl;
	Person p2("����", 1, 16, 165, 46.5);	//����
	p2.print();

	p3.print();
}
