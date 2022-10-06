#ifndef _MODELE_H_
#define _MODELE_H_

#include <iostream>
using namespace std;

enum Moteur{Essence, Diesel, Electrique, Hybride};

class Modele
{
  
  private:

  char   *nom;
  int    puissance;
  Moteur moteur;
  float  prixDeBase;

  public:
 
  Modele(void);
  Modele(const char*n, int p,Moteur m,float px);
  Modele(const Modele &m);
  ~Modele();

  void setNom(const char* n);
  void setPuissance(int p);
  void setMoteur(Moteur m);
  void setPrixDeBase(float px);

  char* getNom(void)       const;
  int getPuissance(void)   const;
  Moteur getMoteur(void)   const;
  float getPrixDeBase(void)const;

  void Affiche() const;

};

#endif