#ifndef PAPIER_H
#define PAPIER_H
#include "Coup.h"

class Papier : public Coup
{
    public:
        Papier();
        virtual ~Papier();
        void appel();

    protected:
    private:
};

#endif // PAPIER_H
