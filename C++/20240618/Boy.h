#ifndef BOY_H
#define BOY_H
class Boy {
public:
	Boy(Boy* pPosition, int id);
	void leave(Boy* pPosition);
	void print();
	Boy* next();
	~Boy();
protected:
	int code;
	Boy* pNext;
};
#endif // BOY_H