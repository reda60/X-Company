#include "TDouble.h"

#include <iostream>

using namespace std;

TDouble::TDouble(double d)
{
	mesure = d;
}

void TDouble::Afficher() const
{
	cout << mesure;
}

bool TDouble::Comparer(TDouble d)
{
	double mesureD = d.GetMesure();
	if (mesure - MARGE <= mesureD && mesureD <= mesure + MARGE) return true;
	return false;
}

double TDouble::GetMesure() 
{
	return mesure;
}

TDouble::~TDouble()
{
}


