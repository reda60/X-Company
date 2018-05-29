#include <string>
#include <list>
#include "Maladie.h"
using namespace std;


Maladie::Maladie(list<Empreinte> l) {
	liste = l;
	EmpreinteRef = new Empreinte(l);
}

int Maladie::Comparer(Empreinte EP) {
	return EmpreinteRef.Comparer(EP);
}

int* Maladie::ComparerATtesEmpreintes(Empreinte EP) {
	
	int sz = listeEmpreintes.size();
	int* res = new int[sz];
	int i;
	for(i=0;i<sz;i++){
		res[i]=listeEmpreintes.get(i).Comparer(EP);
	}
	return res;
}

void Maladie::Afficher() {
	EmpreinteRef.Afficher();
}


