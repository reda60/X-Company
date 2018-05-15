#pragma once
#include "Mesure.h"
#include <string>

using namespace std;

class TString :
	protected Mesure
{
public:
	TString(string m);
	void Afficher() const;
	bool Comparer(TString Ts);
	string GetMesure();
	virtual ~TString();

private:
	string mesure;

};

