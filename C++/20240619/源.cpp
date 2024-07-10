#include <iostream>
#include <windows.h>
#include <conio.h>
#define High 20
#define Width 30
using namespace std;
int score = 0;
int canvae[High][Width] = { 0 };
int moveDirection = 1;
int gameend = 1;
int gamestart = 0;
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


void makeFrame() {
	//边框
	for (int i = 0; i < High; i++) {
		canvae[i][0] = -1;
		canvae[i][Width - 1] = -1;
	}
	for (int j = 0; j < Width; j++) {
		canvae[0][j] = -1;
		canvae[High - 1][j] = -1;
	}
}
void makeFood() {
	//食物
	
	int y = 1 + (rand() / (RAND_MAX + 1.0)) * (Width - 2);
	int x = 1 + (rand() / (RAND_MAX + 1.0)) * (High - 2);
	if (canvae[x][y] == 0) {
		canvae[x][y] = -2;
	}
	else {
		makeFood();
	}
}
void makeSnake() {
	canvae[High / 2][Width / 2] = 1;
	canvae[High / 2+1][Width / 2 ] = 2;
	canvae[High / 2+2][Width / 2 ] = 3;
}

void update_WithInput() {

	char input= 'w';
	if (_kbhit()) {
		input = _getch();

		if (input == 'w'&& moveDirection != 2) {
			moveDirection = 1;

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
	}
}
void moveSnake() {
	int max = 0;
	int Tail_y = 0;
	int Tail_x = 0;
	int	Head_y = 0;
	int	Head_x = 0;

	for (int i = 1; i < High - 1; i++) {
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
			gameend = -1;
		}
		if (canvae[Head_y - 1][Head_x] == -2) {
			score++;
			makeFood();
		}
		else {

			canvae[Tail_y][Tail_x] = 0;
		}
		Head_y--;
		canvae[Head_y][Head_x] = 1;
	}
	if (moveDirection == 2) {
		if (canvae[Head_y + 1][Head_x] == -1 || canvae[Head_y + 1][Head_x] > 0) {
			gameend = -1;
		}

		if (canvae[Head_y + 1][Head_x] == -2) {
			score++;
			makeFood();
		}
		else {

			canvae[Tail_y][Tail_x] = 0;
		}
		Head_y++;
		canvae[Head_y][Head_x] = 1;
	}

	if (moveDirection == 3) {
		if (canvae[Head_y][Head_x-1] == -1 || canvae[Head_y][Head_x - 1] > 0) {
			gameend = -1;
		}

		if (canvae[Head_y][Head_x - 1] == -2) {
			score++;
			makeFood();
		}
		else {

			canvae[Tail_y][Tail_x] = 0;
		}
		Head_x--;
		canvae[Head_y][Head_x] = 1;
	}
	if (moveDirection == 4) {
		if (canvae[Head_y][Head_x + 1] == -1 || canvae[Head_y][Head_x + 1] > 0) {
			gameend = -1;
		}

		if (canvae[Head_y][Head_x + 1] == -2) {
			score++;
			makeFood();
		}
		else {
			canvae[Tail_y][Tail_x] = 0;
		}
		Head_x++;

		canvae[Head_y][Head_x] = 1;
	}

}
void show() {
	zeroXy(0, 0);
	HideCursor();
	cout << "得分：" << score << endl;
	for (int i = 0; i < High; i++) {
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
	Sleep(300);
}
void restart() {
	system("cls");
	char a;
	cout << "gameoveer" << endl << "按\"s\"键重新开始,按任意键退出";

		a = _getch();
		if (a == 's') {
			system("cls");
			for (int i = 1; i < High - 1; i++) {
				for (int j = 1; j < Width - 1; j++) {
					canvae[i][j] = 0;
				}
			}
			makeFrame();
			makeFood();
			makeSnake();
			score = 0;
			gameend = 1;
			moveDirection = 1;
		}
}


int main() {
	srand(static_cast<unsigned int>(time(NULL)));
	makeFrame();
	makeFood();
	makeSnake();

	while (true)
	{
		update_WithInput();
		show();
		moveSnake();
		if (gameend < 1) {
			restart();
		}
			
	}
}