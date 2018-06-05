#pragma once
//Classe propriedades do Console

class Terminal
{
public:
	Terminal();
	~Terminal();
	void dimensao();	
	void setCursorPosition(int, int);
private:
	int x, y;
	int w, h;
};

