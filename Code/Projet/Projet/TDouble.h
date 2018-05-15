#pragma once
#include "Mesure.h"

class TDouble :
	protected Mesure
{
public:
	void Afficher() const;
	bool Comparer(TDouble d);
	TDouble(double d);
	~TDouble();
	double GetMesure();
private:
	double mesure;
	const double MARGE = 1;
};

