#pragma once
#include "Krajina.h"
class Skupiny
{
	vector <Krajina*> zoznamKrajin;
	int skupiny[8][4];
	
public:
	Skupiny();
	~Skupiny();
	void nacitajKrZoSuboru(const char* menoSuboru);
	void vytvorSkupiny();
	void zapisDoSuboru(const char* menoSuboru);
	void usporiadaniePodlaObtiaznosti();
};

