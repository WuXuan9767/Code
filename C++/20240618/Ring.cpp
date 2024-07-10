#include "Ring.h"
#include "Boy.h"
#include <cstddef>
Ring::Ring(int n) {
	pFirst = pCurrent=new Boy(NULL, 1);
	Boy* pB = pFirst;
	for (int i = 2; i <= n; i++) {
		pB = new Boy(pB, i);
	}
}
Boy Ring::getWinner(int m) {
	while (pCurrent != pCurrent->next()) {
		countUpTo(m);
	}		
	Boy win(*pCurrent);
	delete pCurrent;
	return win;
}

void Ring::countUpTo(int m) {
	Boy* pLast = NULL;
	for (int i = m; i > 1; i--) {
		pLast = pCurrent;
		pCurrent = pCurrent->next();
	}
	pCurrent->leave(pLast);
	delete pCurrent; 
	pCurrent = pLast->next();
}
Ring::~Ring(){
}
