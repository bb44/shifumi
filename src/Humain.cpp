#include <iostream>
#include "Humain.h"
#include "Coup.h"
#include "Ciseaux.h"
#include "Papier.h"
#include "Pierre.h"
using namespace std;
Humain::Humain()
{
    //ctor
    score=0;
}

Humain::~Humain()
{
    //dtor
}


Coup Humain::obtenir_coup()
{
    int b;
cout << "Choix 1:Pierre,2:Papier,3:Ciseaux" << endl;
cin>>b;
cout << "b="<<b << endl;
    if(b==1){Pierre *c=new Pierre; jeu=c->type();return *c;}
    else
    {
        if(b==2){Papier *c=new Papier; jeu=c->type();return *c;}
        else{Ciseaux *c=new Ciseaux; jeu=c->type();return *c;}
    }

}
