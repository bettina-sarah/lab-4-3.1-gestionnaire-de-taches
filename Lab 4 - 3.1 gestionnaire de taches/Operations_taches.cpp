#include <string>
#include <iostream>
#include <vector>
#include "Operations_taches.h";

using namespace std;


//données, types et structures des tâches ne doivent être visibles
//que dans le module des tâches.


struct Tache_s
{
	string NomTache;
	int OrdrePriorite;
	string Statut; //En cours ou Complete
};

static vector <Tache_s> Tache;

extern const string NomApplication = "IA Tache";

int TacheActive = 0; // index de la tache active dans le vecteur

void AjoutTache()
{
	string NomTacheAjout;
	int OrdrePrioriteAjout;
	string StatutAjout;
	Tache_s ReponseAAjouter;
	cout << "\n\nAjouter une nouvelle tache\n"
		"Nom: ";
	cin >> NomTacheAjout;
	cout << "\n\nPriorité de la tache (1,2,3): ";
	cin >> OrdrePrioriteAjout;
	cout << "\n\nStatut de la tache (Encours ou complete)";
	cin>>StatutAjout;

	ReponseAAjouter = { NomTacheAjout, OrdrePrioriteAjout, StatutAjout };
	Tache.push_back(ReponseAAjouter);
}

void AfficherUneTache(int indextache)
{
	cout << Tache[indextache].NomTache << "\n" << Tache[indextache].OrdrePriorite << "\n" << Tache[indextache].Statut;

}
void AfficherTaches()
{
	cout << "\n\nLISTE DES TACHES\n";
	for (int i = 0; i < Tache.size(); i++)
	{
		cout << Tache[i].NomTache << "\n" << Tache[i].OrdrePriorite << "\n" << Tache[i].Statut;
	}
}
