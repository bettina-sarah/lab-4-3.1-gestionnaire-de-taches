#include <string>
#include <iostream>
#include <vector>
#include "Operations_taches.h";

using namespace std;

extern const string NomApplication;

//�	Les actions/op�rations sur les t�ches doivent 
//pouvoir �tre utilis�es dans le programme principal

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