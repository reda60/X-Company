#include "TString.h"

#include <iostream>

using namespace std;
TString::TString(string m)
{
	mesure = m;
}

void TString::Afficher() const
{
	cout << mesure;
}

bool TString::Comparer(TString Ts)
{
	if (mesure.compare(Ts.GetMesure()) == 0) return true;
	return false;
}

string TString::GetMesure()
{
	return mesure;
}


TString::~TString()
{
}
