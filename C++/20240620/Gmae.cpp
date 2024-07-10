#include"Game.h"
#include<iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void zeroXy(int x, int y) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handle, pos);

}
void HideCursor() {
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void Game::show() {
	zeroXy(0, 0);
	HideCursor();
	score = ate;
	cout << "得分：" << score << endl;
	for (int i = 0; i < Highth; i++) {
		for (int j = 0; j < Width; j++) {
			if (canvae[i][j] == -1) {
				cout << "# ";
			}
			if (canvae[i][j] == -2) {
				cout << "F ";
			}
			if (canvae[i][j] == 1) {
				cout << "@ ";
			}
			if (canvae[i][j] > 1) {
				cout << "* ";
			}
			if (canvae[i][j] == 0) {
				cout << "  ";
			}
		}
		cout << endl;
	}
	Sleep(speed);
}

void Game::game_start() {
	score = 0;
	health_value = 1;
	moveDirection = 1;
	clear();
	make_frame();
	make_food();
	make_snake();
	while (true) {
		chang_direction();
		move();
		show();
		if (health_value < 1) {
			game_restart();
		}
	}
}

void Game::game_restart() {
	system("cls");
	char a;
	cout << "gameoveer" << endl << "按\"s\"键重新开始,按任意键退出";

	a = _getch();
	if (a == 's') {
		system("cls");
		game_start();

	} 
	else {
		exit(0);
	}
}

