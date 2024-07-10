#include"Food.h"
class Snake : public Food {
protected:
	int moveDirection;
	int health_value;
	int ate;
	int speed;
public:
	Snake();
	void eat();
	void move();
	void make_snake();
	void chang_direction();
	int get_direction();
};