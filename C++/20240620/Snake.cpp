#include"Snake.h"
#include <conio.h>

Snake::Snake() {
	moveDirection = 1;
	health_value = 1;
	ate = 0;
	speed = 300;
	canvae[Highth / 2][Width / 2] = 1;
	canvae[Highth / 2 + 1][Width / 2] = 2;
	canvae[Highth / 2 + 2][Width / 2] = 3;
}

void Snake::make_snake(){
	canvae[Highth / 2][Width / 2] = 1;
	canvae[Highth / 2 + 1][Width / 2] = 2;
	canvae[Highth / 2 + 2][Width / 2] = 3;
}

void Snake::chang_direction() {
	char input = 'w';
	if (_kbhit()) {
		input = _getch();

		if (input == 'w' ) {
			if (moveDirection != 2){
				moveDirection = 1;
			}
			if (moveDirection == 1) {
				speed = 100;
			}
		}
		if (input == 's' && moveDirection != 1) {
			moveDirection = 2;
		}
		if (input == 'a' && moveDirection != 4) {
			moveDirection = 3;
		}
		if (input == 'd' && moveDirection != 3) {
			moveDirection = 4;
		}
		//if (input == 'w' && moveDirection != 2) {
		//	moveDirection = 1;
		//}
		//if (input == 's' && moveDirection != 1) {
		//	moveDirection = 2;
		//}
		//if (input == 'a' && moveDirection != 4) {
		//	moveDirection = 3;
		//}
		//if (input == 'd' && moveDirection != 3) {
		//	moveDirection = 4;
		//}
		else {
			speed = 300;
		}
	}
}
void Snake::move() {
	int max = 0;
	int Tail_y = 0;
	int Tail_x = 0;
	int	Head_y = 0;
	int	Head_x = 0;

	for (int i = 1; i < Highth - 1; i++) {
		for (int j = 1; j < Width - 1; j++) {

			if (canvae[i][j] > 0) {
				canvae[i][j]++;
				if (max < canvae[i][j]) {
					max = canvae[i][j];
					Tail_y = i;
					Tail_x = j;
				}
			}
			if (canvae[i][j] == 2) {
				Head_y = i;
				Head_x = j;
			}
		}
	}

	if (moveDirection == 1) {
		if (canvae[Head_y - 1][Head_x] == -1 || canvae[Head_y - 1][Head_x] > 2) {
			health_value--;
		}
		if (canvae[Head_y - 1][Head_x] == -2) {
			eat();
			make_food();
		}
		else {
			canvae[Tail_y][Tail_x] = 0;
		}
		Head_y--;
		canvae[Head_y][Head_x] = 1;
	}

	if (moveDirection == 2) {
		if (canvae[Head_y + 1][Head_x] == -1 || canvae[Head_y + 1][Head_x] > 0) {
			health_value--;
		}
		if (canvae[Head_y + 1][Head_x] == -2) {
			eat();
			make_food();
		}
		else {

			canvae[Tail_y][Tail_x] = 0;
		}
		Head_y++;
		canvae[Head_y][Head_x] = 1;
	}

	if (moveDirection == 3) {
		if (canvae[Head_y][Head_x - 1] == -1 || canvae[Head_y][Head_x - 1] > 0) {
			health_value--;
		}
		if (canvae[Head_y][Head_x - 1] == -2) {
			eat();
			make_food();
		}
		else {
			canvae[Tail_y][Tail_x] = 0;
		}
		Head_x--;
		canvae[Head_y][Head_x] = 1;
	}

	if (moveDirection == 4) {
		if (canvae[Head_y][Head_x + 1] == -1 || canvae[Head_y][Head_x + 1] > 0) {
			health_value--;
		}
		if (canvae[Head_y][Head_x + 1] == -2) {
			eat();
			make_food();
		}
		else {
			canvae[Tail_y][Tail_x] = 0;
		}
		Head_x++;
		canvae[Head_y][Head_x] = 1;
	}
}
int Snake::get_direction() {
	return moveDirection;
}
void Snake::eat() {
	ate++;
}
