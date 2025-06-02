#pragma once
using namespace System;

void configurar_ventana() {
	Console::SetWindowSize(80, 40);
	Console::CursorVisible = false;
}

void mover_cursor(int columna, int fila) {
	Console::SetCursorPosition(columna, fila);
}

void establecer_color(int color_codigo) {
	switch (color_codigo) {
	case 0: Console::ForegroundColor = ConsoleColor::Black; break;
	case 1: Console::ForegroundColor = ConsoleColor::Yellow; break;
	case 2: Console::ForegroundColor = ConsoleColor::Red; break;
	case 3: Console::ForegroundColor = ConsoleColor::Gray; break;
	case 4: Console::ForegroundColor = ConsoleColor::White; break;
	case 5: Console::ForegroundColor = ConsoleColor::Cyan; break;
	case 6: Console::ForegroundColor = ConsoleColor::Magenta; break;
	case 7: Console::ForegroundColor = ConsoleColor::Green; break;
	case 8: Console::ForegroundColor = ConsoleColor::DarkBlue; break;
	default: Console::ForegroundColor = ConsoleColor::Gray; break;
	}
}