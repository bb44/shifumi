#ifndef CISEAUX_H
#define CISEAUX_H
#include "Coup.h"

class Ciseaux : public Coup
{
    public:
        Ciseaux();
        virtual ~Ciseaux();
         void appel();

    protected:
    private:
};

#endif // CISEAUX_H
