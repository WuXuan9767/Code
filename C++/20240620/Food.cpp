#include"Food.h"
#include <windows.h>
Food::Food() {

	do {
		food_y = 1 + (rand() / (RAND_MAX + 1.0)) * (Width - 1);
		food_x = 1 + (rand() / (RAND_MAX + 1.0)) * (Highth - 1);
	} while (canvae[food_x][food_y] != 0);

	canvae[food_x][food_y] = -2;
}

void Food::make_food() {
	do {
		food_y = 1 + (rand() / (RAND_MAX + 1.0)) * (Width - 1);
		food_x = 1 + (rand() / (RAND_MAX + 1.0)) * (Highth - 1);
	} while (canvae[food_x][food_y] != 0);

	canvae[food_x][food_y] = -2;
}