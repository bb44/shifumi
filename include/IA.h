#ifndef IA_H
#define IA_H
#include "Joueur.h"
#include <vector>
class IA : public Joueur
{
    public:
        IA();
        Coup obtenir_coup();

        void archive(Coup c);
        virtual ~IA();
        int lastcoup;
        vector<int> h;
        vector<int> i;
        int histo[3][3];//Déclaration du tableau
    protected:
    private:
};

#endif // IA_H
