#include <iostream>
#include "Coup.h"
#include "Pierre.h"
#include "Papier.h"
#include "Ciseaux.h"
#include "Joueur.h"
#include "Partie.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
 /*   Coup *c1=new Coup;
c1->Afficher();
string a;
a=(c1->type());
cout << a << endl;
  cout << "Hello world 2!" << endl;
    Pierre *c2=new Pierre;
c2->Afficher();
a=(c2->type());
cout << a << endl;*/
/*Pierre *c1=new Pierre;
Papier *c2=new Papier;
if(c1->egal(*c2)){cout << "=" << endl;}else{cout << "!=" << endl;}
if(c1->battre(*c2)){cout << "c1 bat c2 " << endl;}else{cout << "invaincue" << endl;}
if(c2->battre(*c1)){cout << "c2 bat c1 " << endl;}else{cout << "invaincue" << endl;}*/
/*Joueur *j=new Joueur;
(j->obtenir_coup()).Afficher();
j->Afficher();*/

Partie *p=new Partie;
while (p->continuer()){
p->jouer_tour();
}
p->fin();
    return 0;
}
