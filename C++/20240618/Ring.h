#ifndef RING_H
#define RING_H
#include "Boy.h"
class Ring {
public:
	Ring();
	Ring(int n);
	~Ring();
	Boy getWinner(int m);
private:
	void countUpTo(int m);
	Boy* pFirst;
	Boy* pCurrent;
};
#endif 