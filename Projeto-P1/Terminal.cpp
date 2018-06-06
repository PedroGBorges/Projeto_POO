#include "stdafx.h"
#include "Terminal.h"


//' Determina o tamanho do Console'
Terminal::Terminal()
{
	x = 132;
	y = 44;
	w = 1090;
	h = 745;
}

// Construtor do Terminal
void Terminal::dimensao()
{	
	// muda o tamanho da tela
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, w, h, TRUE);

	COORD coord;
	coord.X = x;
	coord.Y = y;

	HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleScreenBufferSize(Handle, coord);		
}


void Terminal::setCursorPosition(int x, int y)
{
	// Determina posição do cursor (x,y)

	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}