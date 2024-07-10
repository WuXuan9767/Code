class Point{
public:
	Point();
	Point(double dX, double dY);
	double xOffset();
	double yOffset();
	double angle();
	double radius();
	~Point();
private:
	double a;
	double r;
};

