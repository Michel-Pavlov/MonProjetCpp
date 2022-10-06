#include <string.h>
#include "Modele.h"

//--------------CONSTRUCTEURS-------------
Modele::Modele(void)
  {

    cout << "------Constructeur par defaut de la class Modele--------" << endl;
    nom = NULL;
    nom = new char[strlen("nom")+1];
    strcpy (nom,"nom");
    puissance = 0;
    moteur = Essence;
    prixDeBase = 0.0;
  }

Modele::Modele(const char*n, int p,Moteur m,float px)
{
  cout <<"--------Constructeur d'initialisation-----------" << endl;
  nom = NULL;
  cout <<"Test";
  setNom(n);
  cout << "TEST2";
  setPuissance(p);
  setMoteur(m);
  setPrixDeBase(px);
}
//--------------DESTRUCTEUR----------------------
Modele::~Modele()
{
  if(nom) delete nom;
}
//---------------SET-----------------------------
void Modele::setNom(const char* n)
{
  if(n==NULL) return;
  if (nom) delete nom;
  nom = new char[strlen(nom)+1];
  strcpy(nom,n);
}
void Modele::setPuissance(int p)
{
  if(p<0) return;
  puissance = p;
}
void Modele::setMoteur(Moteur m)
{
  moteur = m;
}
void Modele::setPrixDeBase(float px)
{
  if(px<0) return;
  prixDeBase = px;
}

//---------------GET-----------------------------
char* Modele::getNom() const
{
  return nom;
}
int Modele::getPuissance() const
{
  return puissance;
}
Moteur Modele::getMoteur() const
{
  return moteur;
}
float Modele::getPrixDeBase() const
{
  return prixDeBase;
}



void Modele::Affiche() const
{
  cout << "Modele : ";
  cout << nom << "(";
  cout << puissance << "Ch,";
  switch (moteur)
  {
    case Essence:    cout << "Essence,";    break;
    case Diesel:     cout << "Diesel," ;    break;
    case Electrique: cout << "Electrique,"; break;
    case Hybride:    cout << "Hybride," ;   break; 
  }
  cout << prixDeBase << "euros)" << endl;
}
