#include "Point.h"
#include < math.h>
Point::Point(double ix, double iy) {
	a = atan2(iy, ix);
	r = sqrt(ix * ix + iy * iy);
}
double Point::xOffset() {
	return r * cos(a);
}

double Point::yOffset() {
	return r * sin(a);
}
double Point::angle() {
	return (180 / 3.14159) * a;
}
double Point::radius() {
	return r;
}
Point::~Point() {}