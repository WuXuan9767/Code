class Person {
public:
	Person();
	Person(const char n[], Tdate d);
	~Person();
	void print();
	Tdate getBirthday() const;


private:
	Tdate* birthday;
	char* name ;
};