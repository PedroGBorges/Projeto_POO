#pragma once
#include "Veiculos.h"
class Carro :
	public Veiculos
{
public:
	Carro(int x, int y);	
private:
	int num_passageiros;
};