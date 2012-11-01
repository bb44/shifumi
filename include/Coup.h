#ifndef COUP_H
#define COUP_H
#include "String"

using namespace std;
class Coup
{
    public:
        Coup();
        ~Coup();
        void Afficher();
        void appel();
        string type();
        bool egal(Coup c);
        bool battre(Coup c);
        string nom;
};

#endif // COUP_H
