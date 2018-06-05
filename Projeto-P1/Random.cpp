#include "stdafx.h"
#include "Random.h"


Random::Random()
{
}


Random::~Random()
{
}


int Random::generate(int a, int b)
{
	// gera um n�mero aleat�rio no intervalo (a,b)

	std::random_device rd;
	std::mt19937 eng(rd());
	std::uniform_int_distribution<> distr(a, b);

	int x = distr(eng);

	return x;
}