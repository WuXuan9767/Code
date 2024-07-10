#include "Point.h"
#include <math.h>
Point::Point(double ia, double ir) {
	a = ia;
	r = ir;
}
double Point::xOffset() {
	return r * cos(a/(180/3.14159));
}

double Point::yOffset() {
	return r * sin(a/(180 / 3.14159));
}
double Point::angle() {
	return a;
}
double Point::radius() {
	return r;
}
Point::~Point() {}