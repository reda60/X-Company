#pragma once
#include "Mesure.h"

class TInteger : protected Mesure
{
public:
	TInteger(int m);
	void Afficher() const;
	bool Comparer(TInteger tI);
	virtual ~TInteger();
	int GetMesure();
private:
	int mesure;
	const int MARGE=1;
};

