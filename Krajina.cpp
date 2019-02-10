#include "Krajina.h"






Krajina::Krajina(int pporadie, string pnazov)
{
	poradie = pporadie;
	nazov = pnazov;
}

Krajina::~Krajina()
{
}

int Krajina::getPoradie()
{
	return poradie;
}

string Krajina::getNazov()
{
	return nazov;
}
