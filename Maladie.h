#include <string>
#include <list>
#include "Empreinte.h"
using namespace std;


class Maladie {


	public:
		Maladie(list<Empreinte> l);
		//Constructeur de Maladie, à partir d'une liste d'empreintes
		
		int Comparer(Empreinte EP);
		//Comparer l'empreinte EP à chacune des n empreintes de la maladies
		//et renvoie le pourcentage de ressemblance.
		
		int* ComparerATtesEmpreintes(Empreinte EP);
		//Comparer l'empreinte EP à chacune des n empreintes de la maladies.
		//Renvoie un tableau de n cases dont chaque la i-ème case contient 
		//le pourcentage de ressemblance de EP avec la i-ème empreinte
		//de listeEmpreintes
		
		void Afficher();
		//Affiche les empreintes liées à la maladie

	private:
		list<Empreinte> listeEmpreintes;
		iterator<Empreinte> index;
		Empreinte EmpreinteRef;
		
		
};
