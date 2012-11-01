#include "Pierre.h"
#include "string"
#include <iostream>

using namespace std;

Pierre::Pierre()
{
    //ctor
    appel();
}

Pierre::~Pierre()
{
    //dtor
}

void Pierre::appel()
{
    nom="Pierre";
}



