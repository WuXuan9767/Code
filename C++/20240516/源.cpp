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
			cout << "员工 " << name << " 完成了 " << work << " 的工作。\n";
		}
		else {
			cout << "员工 " << name << " 还未打卡，不能开始工作。\n";
		}
	}

	
void Check_in() {
			isClockedIn = true;
			cout << "员工 " << name << " 已打卡。\n";

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
			cout << "员工 " << employee.getname() << " 加入了公司。\n";
		}
		else {
			cout << "公司已经有5名员工了，不能再添加新的员工。\n";
		}
	}

	void advertise() {
		std::cout << "公司 " << name << " 正在对外宣传。\n";
	}

	void assignWork(string work, string position) {

		for (int i = 0; i < employees.size(); i++) {
			if (employees[i].getjob() == position) {
				employees[i].doWork(work);
				return;
			}
		}
		std::cout << "没有找到职位为 " << position << " 的员工。\n";

	};
};
int main() {
	Company myCompany("我的公司", "科技", "重庆市南岸区");
	Employee employee1("张三", "工程师", "男", 30, 1);
	Employee employee2("李四", "设计师", "女", 28, 2);
	Employee employee3("王五", "产品经理", "男", 32, 3);
	Employee employee4("赵六", "测试", "女", 29, 4);
	Employee employee5("孙七", "运营", "男", 31, 5);

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

	myCompany.assignWork("开发新功能", "工程师");
	myCompany.assignWork("设计新界面", "设计师");
	myCompany.assignWork("规划新产品", "产品经理");
	myCompany.assignWork("测试新功能", "测试");
	myCompany.assignWork("推广新产品", "运营");

	return 0;
}

