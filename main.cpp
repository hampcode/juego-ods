#include "pch.h"
#include <windows.h>
#include <iostream>
#include "pantallas.h"
#include "mapas.h"
#include "juego.h"

using namespace System;
using namespace std;

int main() {
	mostrar_caratula();
	mostrar_carga();
	Console::Clear();

	configurar_ventana();
	dibujar_mapa(mapa_1);
	jugar_mapa(mapa_1);

	Console::Clear();
	dibujar_mapa(mapa_2);
	jugar_mapa(mapa_2);

	mostrar_fin_juego();
	Sleep(1000);
	return 0;
}
