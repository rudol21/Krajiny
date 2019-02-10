#include "Skupiny.h"



Skupiny::Skupiny()
{
	
}


Skupiny::~Skupiny()
{
}

void Skupiny::nacitajKrZoSuboru(const char * menoSuboru)
{
	string nazovKrajiny;
	int i = 0;
	ifstream cin(menoSuboru);

	while (cin >> nazovKrajiny)
	{
		++i;
		zoznamKrajin.push_back(new Krajina(i, nazovKrajiny));
	}
}

void Skupiny::vytvorSkupiny()
{
	vector<int> pole;

	for (int i = 0; i < 8; i++)
	{
		pole.push_back(i);		
	}
	random_shuffle(pole.begin(), pole.end());
	
	for (int i = 0; i < 8; i++)
	{
		skupiny[i][0] = pole[i];
	}

	
	pole.clear();
	for (int i = 8; i < 16; i++)
	{
		pole.push_back(i);
	}
	random_shuffle(pole.begin(), pole.end());

	for (int i = 0; i < 8; i++)
	{
		skupiny[i][1] = pole[i];
	}
	
	pole.clear();
	for (int i = 16; i < 24; i++)
	{
		pole.push_back(i);
	}
	random_shuffle(pole.begin(), pole.end());

	for (int i = 0; i < 8; i++)
	{
		skupiny[i][2] = pole[i];
	}

	
	pole.clear();
	for (int i = 24; i < 32; i++)
	{
		pole.push_back(i);
	}
	random_shuffle(pole.begin(), pole.end());

	for (int i = 0; i < 8; i++)
	{
		skupiny[i][3] = pole[i];
	}

	
	pole.clear();
	

}

void Skupiny::zapisDoSuboru(const char * menoSuboru)
{
	fstream zapisovac(menoSuboru);
	
	char x = 'A';
	x--;
	for (int i = 0; i < 8; i++)
	{
		x++;
		zapisovac << x << endl;
		for (int j = 0; j < 4; j++)
		{
			zapisovac << zoznamKrajin[skupiny[i][j]]->getNazov() << endl;
		}
	}
}

void Skupiny::usporiadaniePodlaObtiaznosti()
{
	vector <int> obtiaznost;
	int x = 0;
	for (int i = 0; i < 8; i++)
	{
		
		for (int j = 0; j < 4; j++)
		{
			x = x + zoznamKrajin[skupiny[i][j]]->getPoradie();
		}
		obtiaznost.push_back(x);
		x = 0;//urobit triedu obtiznost ,usporiadaù a ptm vypisaù
	}
}
