#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Employee {
private:
	string name;
	string job;
	bool sex;
	int age;
	int id;
	bool isClockedIn;
public:
	Employee(string Name, string Job, bool Sex, int Age, int Id) {
		name = Name;
		job = Job;
		sex = Sex;
		age = Age;
		id = Id;
		isClockedIn = false;
	}
	string  getname() {
		return name;
	}
	string getjob() {
		return job;
	}
	void doWork(string work) {
		isClockedIn = true;
		if (isClockedIn) {
			cout << "Ա�� " << name << " ����� " << work << " �Ĺ�����\n";
		}
		else {
			cout << "Ա�� " << name << " ��δ�򿨣����ܿ�ʼ������\n";
		}
	}

	
void Check_in() {
			isClockedIn = true;
			cout << "Ա�� " << name << " �Ѵ򿨡�\n";

	}
};

class Company {
private:
	string name;
	string type;
	string  address;
	vector<Employee> employees;
public:
	Company(string name, string type, string address)
		: name(name), type(type), address(address) {}

	void addEmployee(Employee employee) {
		if (employees.size() < 5) {
			employees.push_back(employee);
			cout << "Ա�� " << employee.getname() << " �����˹�˾��\n";
		}
		else {
			cout << "��˾�Ѿ���5��Ա���ˣ�����������µ�Ա����\n";
		}
	}

	void advertise() {
		std::cout << "��˾ " << name << " ���ڶ���������\n";
	}

	void assignWork(string work, string position) {

		for (int i = 0; i < employees.size(); i++) {
			if (employees[i].getjob() == position) {
				employees[i].doWork(work);
				return;
			}
		}
		std::cout << "û���ҵ�ְλΪ " << position << " ��Ա����\n";

	};
};
int main() {
	Company myCompany("�ҵĹ�˾", "�Ƽ�", "�������ϰ���");
	Employee employee1("����", "����ʦ", "��", 30, 1);
	Employee employee2("����", "���ʦ", "Ů", 28, 2);
	Employee employee3("����", "��Ʒ����", "��", 32, 3);
	Employee employee4("����", "����", "Ů", 29, 4);
	Employee employee5("����", "��Ӫ", "��", 31, 5);

	myCompany.addEmployee(employee1);
	myCompany.addEmployee(employee2);
	myCompany.addEmployee(employee3);
	myCompany.addEmployee(employee4);
	myCompany.addEmployee(employee5);

	myCompany.advertise();

	employee1.Check_in();
	employee2.Check_in();
	employee3.Check_in();
	employee4.Check_in();
	employee5.Check_in();

	myCompany.assignWork("�����¹���", "����ʦ");
	myCompany.assignWork("����½���", "���ʦ");
	myCompany.assignWork("�滮�²�Ʒ", "��Ʒ����");
	myCompany.assignWork("�����¹���", "����");
	myCompany.assignWork("�ƹ��²�Ʒ", "��Ӫ");

	return 0;
}

