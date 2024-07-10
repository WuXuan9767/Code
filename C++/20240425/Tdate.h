class Tdate {
public:
	Tdate();
	Tdate(int d, int m, int y);
	void print() const;
	~Tdate();
	Tdate(const Tdate& oldTdate);

private:
	int day;
	int month;
	int year;
};
