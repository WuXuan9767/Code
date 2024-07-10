#include"Snake.h"

class Game : public Snake {
private:
	int score = 0;
	int gameend = 1;
public:

	void show();
	void game_start();
	void game_restart();
	void game_end();
	void get_input();
	void game_test();
};