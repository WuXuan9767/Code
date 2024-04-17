#include<iostream>
using namespace std;

class Tdate{
    public:
    Tdate();
    Tdate(int d,int m,int y);
    Tdate(const Tdate&oldTdate);
    bool getDate(int &d,int &m,int &y) const;
    void print() const;
    Tdate add(int id);
    ~Tdate();
private:
    int day;
    int month;
    int year;
};