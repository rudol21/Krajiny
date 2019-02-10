#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

class Krajina
{
	int poradie;
	string nazov;
public:
	Krajina(int pporadie, string pnazov);
	~Krajina();
	int getPoradie();
	string getNazov();

};

