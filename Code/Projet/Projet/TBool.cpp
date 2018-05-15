#include "TBool.h"

#include <iostream>

using namespace std;

TBool::TBool(bool b)
{
	mesure = b;
}

void TBool::Afficher() const
{
	cout << (mesure ? "True" : "False");
}

bool TBool::Comparer(TBool Tb)
{
	return Tb.GetMesure() == mesure;
}

bool TBool::GetMesure()
{
	return mesure;
}


TBool::~TBool()
{
}
