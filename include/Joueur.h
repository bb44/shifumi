#ifndef JOUEUR_H
#define JOUEUR_H

#include "Coup.h"
#include "String"

using namespace std;
class Joueur
{
    public:
        Joueur();
        virtual ~Joueur();
        Coup obtenir_coup();
        void Afficher();
        string jeu;
        int score;
    protected:
    private:
};

#endif // JOUEUR_H
