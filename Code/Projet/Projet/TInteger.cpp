#include "TInteger.h"

#include <iostream>

using namespace std;

TInteger::TInteger(int m)
{
	mesure = m;

}


void TInteger::Afficher() const
{
	cout << mesure;
}

bool TInteger::Comparer(TInteger d) 
{
	int mesureD = d.GetMesure();
	if (mesure - MARGE <= mesureD && mesureD <= mesure + MARGE) return true;
	return false;
}

TInteger::~TInteger()
{
}

int TInteger::GetMesure()
{
	return mesure;
}
