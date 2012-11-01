#include "Papier.h"
#include "string"


using namespace std;

Papier::Papier()
{
    //ctor
    appel();
}

Papier::~Papier()
{
    //dtor
}

void Papier::appel()
{
    nom="Papier";
}


