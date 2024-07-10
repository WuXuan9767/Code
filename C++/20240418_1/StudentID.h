//StudentID.h
class StudentID{
public:
	StudentID();
	StudentID(int id);
	~StudentID();
	void print();
private:
	bool isValid(void);
	int value;
};