//Student.h
# include "StudentID.h"
class Student{
public:
	Student(); 
	Student(int id);
	Student(int id,const char* pName);
	Student(int id,const char* pName, int xHours, float xgpa);
	~Student();
	
private:
	char name[20];
	int semesHours;
	float gpa;
	StudentID studentID;
};