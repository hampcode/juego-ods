#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "mapas.h"
#include "utilidades.h"

using namespace std;
using namespace System;


void mostrar_caratula() {
	Console::Clear();
	SetConsoleTitle(L"Proyecto HAMPCODE");

	establecer_color(10);
	mover_cursor(5, 2);

	cout << R"(
             \   ^__^
              \  (oo)\_______
                 (__)\       )\/\
                     ||----w |
                     ||     ||

        ~~~ ~~~   ~~~   ~~~ ~~~   ~~~   ~~~   ~~~   ~~~
       ^  ^     ^     ^   ^    ^      ^  ^   ^    ^   ^
      /|\/|\   /|\   /|\ /|\  /|\    /|\/|\ /|\  /|\ /|\
     /_|__|_\ /_|_\ /_|_|_|\/_|_\  /_|__|_/_|_\/_|_/_|_\
       Arboles    Montanas      Rios y Naturaleza
    )";

	establecer_color(11);
	mover_cursor(10, 14);
	cout << " Proyecto HAMPCODE ";

	establecer_color(7);
	mover_cursor(12, 19);
	cout << "Presiona una tecla para continuar...";

	cin.get(); // Esperar tecla
}


void mostrar_fin_juego() {
	Console::Clear();
	SetConsoleTitle(L"¡Felicidades! Fin del Juego");

	establecer_color(2); // Rojo claro o verde fuerte
	mover_cursor(5, 2);
	cout << R"(
         __    __       ___      .___  ___. .______      
        |  |  |  |     /   \     |   \/   | |   _  \     
        |  |__|  |    /  ^  \    |  \  /  | |  |_)  |    
        |   __   |   /  /_\  \   |  |\/|  | |   ___/     
        |  |  |  |  /  _____  \  |  |  |  | |  |         
        |__|  |__| /__/     \__\ |__|  |__| | _|         
                - suscribete: https://www.youtube.com/@hampcode -                     
                - Desarrollado por Henry Antonio Mendoza Puerta -
	)";

	establecer_color(14);
	mover_cursor(8, 15);
	cout << "Presiona una tecla para salir...";

	cin.get(); // Esperar tecla
}


void mostrar_carga() {
	system("cls");
	establecer_color(5);
	mover_cursor(30, 14);
	cout << "Cargando...";
	establecer_color(3);
	mover_cursor(30, 15);
	for (int i = 0; i < 30; i++) {
		cout << char(219);
		Sleep(60);
	}
	establecer_color(7);
	Sleep(500);
}



