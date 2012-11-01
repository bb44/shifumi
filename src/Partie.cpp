#include "Partie.h"
#include "Coup.h"
#include <iostream>
Partie::Partie()
{
    //ctor
    j1=new Humain;
    j2=new IA;

}

Partie::~Partie()
{
    //dtor
}

void Partie::jouer_tour()
{
    //chaque joueur choisi un coup
    //et on compare
     Afficher(1);

    Coup c=j1->obtenir_coup();
   int a= match(c,j2->obtenir_coup());
   //actualisons le score
   cout<<"score= "<<a<<endl;
   if(a==1){j1->score=j1->score+1;}
   if(a==-1){j2->score=j2->score+1;}
   //affichons le tout
   Afficher(2);
   //actualisons l'IA
    j2->archive(c);
}

int Partie::match(Coup c1,Coup c2)
{
    int r=-1;
    if(c1.egal(c2)){r=0;}
    if(c1.battre(c2)){r=1;}
    return r;
}

void Partie::Afficher(int a)
{
    if(a==1){cout << endl << "Nouveau round!!!" << endl;}else{
          cout << endl << "Nouveau score!!!" << endl;    cout << "Le joueur 1 joue "<<j1->jeu << endl;
          cout << "Le joueur 2 joue "<<j2->jeu << endl;
          cout << "Le score du joueur 1 est de "<<j1->score<<" points" << endl;
          cout << "Le score du joueur 2 est de "<<j2->score<<" points" << endl;
          }




}

bool Partie::continuer()
{
    bool r=true;
    if(j1->score==5 || j2->score==5){r=false;}
    return r;
}

void Partie::fin()
{
    cout << endl << "Fin de la partie!!!" << endl;
    if(j1->score==5 ){
    cout << "Le joueur 1 gagne" << endl;}
    else{ cout << "Le joueur 2 gagne" << endl;
    }

}
