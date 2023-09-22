#include <string>
#include <iostream>
#include <vector>
#include "Operations_taches.h";

using namespace std;

extern const string NomApplication;

//•	Les actions/opérations sur les tâches doivent 
//pouvoir être utilisées dans le programme principal

extern int TacheActive;

void main(void)
{

	cout << NomApplication << "\n\n";
	for (int i = 0; i < 3; i++) // ajout 3 tache
	{
		AjoutTache();
	}
	
	TacheActive++;
	AfficherTaches();
	cout << "\n\nLa tache active est: \n";
	AfficherUneTache(TacheActive);

}