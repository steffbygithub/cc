// snake-game.cc : Ein simples Snake-game mit max 200 Lines of Code 
//
// Author: Stefan Mueller
// erstellt: 2021
//geaendert: 03.05.2023 Steuerung um Cursortasten erweitert 

#include <iostream>
#include <windows.h>           // for windows
#include <conio.h>



//#include<unistd.h>             // for linux 
//#include <ncurses.h>           // for MacOS gcc Snake-game.cpp -lncurses

using namespace std;
bool bGameOver;
const int WIDTH = 18;
const int HEIGHT = 18;
int x, y, appleX, appleY, score;
int iTailX[150], iTailY[150];
int iTailLength;
enum  eMove { START = 0, LEFT, RIGHT, UP, DOWN };
eMove richtung;
void Init() {

	bGameOver = false;
	richtung = START;
	x = WIDTH / 2;
	y = HEIGHT / 2;
	appleX = rand() % WIDTH;
	appleY = rand() % HEIGHT;
	score = 0;
	iTailLength = 0;
}
void Show() {
	system("clear");
	//print FirstLine
	for (int i = 0; i <= WIDTH; i++) {
		switch (i) {
		case 0: cout << char(218); break;
		case WIDTH: cout << char(191); break;
		default: cout << char(196);
		}
	}
	cout << endl;
	//print middle lines
	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x <= WIDTH; x++) {
			if (x == 0) cout << char(179);
			else if (x > 0 && x < WIDTH ) {
				if (x == ::x && y == ::y) cout << char(143);
				else if (x == appleX && y == appleY)
					cout << char(224);
				else
				{
					bool bPrint = false;
					for (int i = 0; i < iTailLength; i++)
					{
						if (iTailX[i] == x && iTailY[i] == y) {
							cout << "o";
							bPrint = true;
						}
					}
					if (!bPrint) cout << " ";
				}
			}
			if (x == WIDTH) cout << char(179);
		}
		cout << endl;
	}
	//print LastLine
	for (int i = 0; i <= WIDTH; i++) {
		switch (i) {
		case 0: cout << char(192); break;
		case WIDTH: cout << char(217); break;
		default: cout << char(196);
		}
	}
	cout << endl;
	cout << "Score: " << score << endl;
}

void UserAction() {
	if (_kbhit()) {
		char ctaste = _getch();
		// Testanweisung
		// cout << " .. " << ctaste << " // ";
		switch (ctaste) {
		case 'a': richtung = LEFT; break;
		case 'd': richtung = RIGHT; break;
		case 's': richtung = DOWN; break;
		case 'w': richtung = UP; break;
		// date 03.05.2023 case um die Cursor-tasten erweitert
		// Loesung klappt unter Windows (Test auf Mac und Linux
		// noch offen!
		case 27:;
		case 91:;
		case 'H': richtung = UP; break;
		case 'P': richtung = DOWN; break;
		case 'M': richtung = RIGHT; break;
		case 'K': richtung = LEFT; break;
		case 'x': bGameOver = true; break;
		}
	}
}

void Rules() {
	int iprevX = iTailX[0];
	int iprevY = iTailY[0];
	int itmpX, itmpY;
	iTailX[0] = x;
	iTailY[0] = y;
	for (int i = 1; i < iTailLength; i++) {
		itmpX = iTailX[i];
		itmpY = iTailY[i];
		iTailX[i] = iprevX;
		iTailY[i] = iprevY;
		iprevX = itmpX;
		iprevY = itmpY;
	}
	switch (richtung) {
	case LEFT: x--; break;
	case RIGHT: x++; break;
	case DOWN: y++; break;
	case UP: y--; break;
	default: break;
	}
	//if (x > WIDTH || x < 0 || y > HEIGHT || y < 0)
	//	bGameOver = true;
	if (x >= WIDTH) x = 0; else if (x < 0) x = WIDTH - 1;
	if (y >= HEIGHT) y = 0; else if (y < 0) y = HEIGHT - 1;
	for (int i = 0; i < iTailLength; i++)
		if (iTailX[i] == x && iTailY[i] == y) bGameOver = true;
	//eat It
	if (x == appleX && y == appleY)
	{
		score += 10;
		appleX = rand() % WIDTH ;
		appleY = rand() % HEIGHT;
		iTailLength++;
	}
}

int main()
{
	Init();
	while (!bGameOver) {
		Show();
		UserAction();
		Rules();
		Sleep(200);   // linux sleep(1250);
	}
	return 0;
}