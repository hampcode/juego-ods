#pragma once
#include <iostream>
#include <conio.h>
#include "utilidades.h"

using namespace std;


void mover_bloques_horizontales(int mapa[FILAS][COLUMNAS], int pos_x[], int pos_y[], int dir[]) {
	for (int i = 0; i < BLOQUES_MAX; i++) {
		mover_cursor(pos_x[i], pos_y[i]); cout << ' ';
		int siguiente = pos_x[i] + dir[i];
		if (siguiente >= 0 && siguiente < COLUMNAS && mapa[pos_y[i]][siguiente] == 0)
			pos_x[i] = siguiente;
		else
			dir[i] *= -1;
		mover_cursor(pos_x[i], pos_y[i]); establecer_color(5); cout << (char)219;
	}
}

void mover_bloques_verticales(int mapa[FILAS][COLUMNAS], int pos_x[], int pos_y[], int dir[]) {
	for (int i = 0; i < BLOQUES_MAX; i++) {
		mover_cursor(pos_x[i], pos_y[i]); cout << ' ';
		int siguiente = pos_y[i] + dir[i];
		if (siguiente >= 0 && siguiente < FILAS && mapa[siguiente][pos_x[i]] == 0)
			pos_y[i] = siguiente;
		else
			dir[i] *= -1;
		mover_cursor(pos_x[i], pos_y[i]); establecer_color(6); cout << (char)219;
	}
}

