#include "Joueur.h"
#include "Coup.h"
#include "Papier.h"
#include "Pierre.h"
#include "Ciseaux.h"
#include <iostream>
Joueur::Joueur()
{
    //ctor
    score=0;
}

Joueur::~Joueur()
{
    //dtor
}

Coup Joueur::obtenir_coup()
{
    //Coup *c=new Coup;
    Papier *c=new Papier;
    jeu=c->type();
    return *c;
}

void Joueur::Afficher()
{
    cout << endl << jeu  << endl;
}
