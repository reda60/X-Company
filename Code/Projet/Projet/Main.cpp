#include "TDouble.h"
#include "TInteger.h"
#include "TString.h"
#include "TBool.h"

#include <iostream>

using namespace std;


int main()
{
	cout << "TDouble" << endl;
	TDouble mesure(2.75);
	mesure.Afficher();
	cout << endl;
	TDouble mesureAComparerTrue(3.4);
	cout << mesureAComparerTrue.Comparer(mesure) << endl;
	TDouble mesureAComparerFalse(3.8);
	cout << mesureAComparerFalse.Comparer(mesure) << endl;
	cout << endl;

	cout << "TInteger" << endl;
	TInteger entier(5);
	entier.Afficher();
	cout << endl;
	TInteger entierAComparerTrue(4);
	cout << entierAComparerTrue.Comparer(entier) << endl;
	TInteger entierAComparerFalse(3);
	cout << entierAComparerFalse.Comparer(entier) << endl;
	cout << endl;

	cout << "TString" << endl;
	TString phrase("malade");
	phrase.Afficher();
	cout << endl;
	TString phraseAComparerTrue("malade");
	cout << phraseAComparerTrue.Comparer(phrase) << endl;
	TString phraseAComparerFalse("pas malade");
	cout << phraseAComparerFalse.Comparer(phrase) << endl;
	cout << endl;

	cout << "TBool" << endl;
	TBool boolean(true);
	boolean.Afficher();
	cout << endl;
	TBool booleanAComparerTrue(true);
	cout << booleanAComparerTrue.Comparer(boolean) << endl;
	TBool booleanAComparerFalse(false);
	cout << booleanAComparerFalse.Comparer(boolean) << endl;
	cout << endl;

	int sortie;
	do
	{
		cout << "Tapez 0 pour sortir de l'application." << endl;
		cin >> sortie;
	} while (sortie);

    return 0;
}

