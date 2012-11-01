#ifndef PARTIE_H
#define PARTIE_H
#include "Joueur.h"
#include "Coup.h"
#include "Humain.h"
#include "IA.h"
class Partie
{
    public:
        Partie();
        virtual ~Partie();
        void jouer_tour();
        void Afficher(int a);
        bool continuer();
        void fin();
        int match(Coup c1,Coup c2);
        Humain *j1;
        IA *j2;
    protected:
    private:
};

#endif // PARTIE_H
