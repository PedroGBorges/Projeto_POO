#include "stdafx.h"
#include "Veiculos.h"
#include "Carro.h"
#include "Moto.h"
#include "Caminhao.h"
#include "Mundo.h"
#include "Terminal.h"


int main()
{
	// Chama console Terminal "t1"
	Terminal t1 = Terminal();
	t1.dimensao();

	// Chama Classe Mundo mundo
	Mundo mundo = Mundo();

	// vector
	vector<Carro> car;
	vector<Caminhao> truck;
	vector<Moto> bike;

	int max_x = mundo.get_tamanho_x();
	int max_y = mundo.get_tamanho_y();

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		Carro c = Carro(max_x, max_y);
		car.push_back(c);

		Caminhao t = Caminhao(max_x, max_y);
		truck.push_back(t);

		Moto b = Moto(max_x, max_y);
		bike.push_back(b);
	}
	
	// loop principal
	while (1)
	{
		mundo.fabricaVeiculo(car, truck, bike);
		mundo.colisao(car, truck, bike);

		mundo.setVeiculos(car, truck, bike);
		mundo.printMundo(car.size(), truck.size(), bike.size());

		mundo.movimenta(car, truck, bike);
		mundo.colisao(car, truck, bike);

		mundo.resetMap();

		Sleep(36);		
	}

    return 0;
}