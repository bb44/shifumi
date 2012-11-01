#ifndef HUMAIN_H
#define HUMAIN_H

#include "Joueur.h"
class Humain : public Joueur
{
    public:
        Humain();
        Coup obtenir_coup();
        virtual ~Humain();
    protected:
    private:
};

#endif // HUMAIN_H
