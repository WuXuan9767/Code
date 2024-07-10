class Point {
public:
	Point();
	Point(double ia, double ir);
	double xOffset();
	double yOffset();
	double angle();
	double radius();
	~Point();
private:
	double a;
	double r;
};
