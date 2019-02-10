#include "Skupiny.h"
#include "Krajina.h"

int main(int argc, char * argv[])
{
	Skupiny *s = new Skupiny();
	s->nacitajKrZoSuboru("suborNaCitanie.txt");
	s->vytvorSkupiny();
	s->zapisDoSuboru("suborNaZapis.txt");
}