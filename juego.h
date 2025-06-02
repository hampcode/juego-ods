#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "jugador.h"
#include "bloque.h"
#include "utilidades.h"

using namespace std;
using namespace System;

void jugar_mapa(int mapa[FILAS][COLUMNAS]) {
	int jugador_x = 1, jugador_y = 1;

	int bloques_h_pos_x[BLOQUES_MAX] = { 10, 20, 30, 35, 40 };
	int bloques_h_pos_y[BLOQUES_MAX] = { 10, 12, 14, 16, 18 };
	int bloques_h_dir[BLOQUES_MAX] = { 1, -1, 1, -1, 1 };

	int bloques_v_pos_x[BLOQUES_MAX] = { 5, 15, 25, 30, 40 };
	int bloques_v_pos_y[BLOQUES_MAX] = { 5, 7, 9, 11, 13 };
	int bloques_v_dir[BLOQUES_MAX] = { 1, 1, -1, -1, 1 };

	Console::CursorVisible = false;
	mover_cursor(jugador_x, jugador_y); establecer_color(7); cout << (char)219;

	while (true) {
		mover_jugador(jugador_x, jugador_y, mapa);
		mover_bloques_horizontales(mapa, bloques_h_pos_x, bloques_h_pos_y, bloques_h_dir);
		mover_bloques_verticales(mapa, bloques_v_pos_x, bloques_v_pos_y, bloques_v_dir);

		if (mapa[jugador_y][jugador_x] == 8) break;
		Sleep(100);
	}
}


