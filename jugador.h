#pragma once
#include <iostream>
#include <conio.h>
#include "utilidades.h"

using namespace std;
using namespace System;

void mover_jugador(int& x, int& y, int mapa[FILAS][COLUMNAS]) {
	if (_kbhit()) {
		char tecla = _getch();
		mover_cursor(x, y); cout << ' ';
		if (tecla == 'w' && y > 0 && (mapa[y - 1][x] == 0 || mapa[y - 1][x] == 8)) y--;
		if (tecla == 's' && y < FILAS - 1 && (mapa[y + 1][x] == 0 || mapa[y + 1][x] == 8)) y++;
		if (tecla == 'a' && x > 0 && (mapa[y][x - 1] == 0 || mapa[y][x - 1] == 8)) x--;
		if (tecla == 'd' && x < COLUMNAS - 1 && (mapa[y][x + 1] == 0 || mapa[y][x + 1] == 8)) x++;
		mover_cursor(x, y); establecer_color(7); cout << (char)219;
	}
}
