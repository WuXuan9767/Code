#pragma once
// Sport.h
class Sport {
public:
	Sport();
	Sport(const char* pName);
	void print();
	~Sport();
private:
	char name[20];
};