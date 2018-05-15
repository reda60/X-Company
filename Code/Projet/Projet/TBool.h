#pragma once
#include "Mesure.h"

class TBool :
	public Mesure
{
public:
	TBool(bool b);
	void Afficher() const;
	bool Comparer(TBool Tb);
	bool GetMesure();
	~TBool();
private:
	bool mesure;
};

