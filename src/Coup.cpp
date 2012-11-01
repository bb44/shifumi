#include "Coup.h"
#include <iostream>
#include "string"


using namespace std;
Coup::Coup()
{
    //ctor
    appel();
}

Coup::~Coup()
{
    //dtor
}

void Coup::Afficher()
{
    cout << endl << nom << endl;
}

void Coup::appel()
{
    nom="Coup";
}

string Coup::type()
{
return nom;
}


bool Coup::egal(Coup c)
{

    if(this->type()==c.type()){cout << endl << "j1==j2"<< endl;return true;}else{return false;}

}

bool Coup::battre(Coup c)
{
        bool r=false;
        string a,b;
        a=type();
        b=c.type();
        if(a=="Pierre"&&b=="Ciseaux"){r=true;}
        if(b=="Papier"&&a=="Ciseaux"){r=true;}
        if(a=="Papier"&&b=="Pierre"){r=true;}
    return r;
}
