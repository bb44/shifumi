#include "IA.h"
#include <iostream>
#include "Coup.h"
#include "Ciseaux.h"
#include "Papier.h"
#include "Pierre.h"
#include  "cstdlib"
#include <time.h>
#include <vector>
using namespace std;
IA::IA()
{
    //ctor
     score=0;
    lastcoup=-1;
    histo[0][0]=0;histo[0][1]=0;histo[0][2]=0; histo[1][0]=0; histo[1][1]=0; histo[1][2]=0; histo[2][0]=0; histo[2][1]=0; histo[2][2]=0;
}

IA::~IA()
{
    //dtor
}

Coup IA::obtenir_coup()
{
     string z="";
    for(int j=0;j<h.size();j++)
    {
        string a="";
        if(i[j]==0){a="p";}
        if(i[j]==1){a="f";}
        if(i[j]==2){a="c";}
        if(h[j]==0){a=a+"P";}
        if(h[j]==1){a=a+"F";}
        if(h[j]==2){a=a+"C";}
        z=z+a;
}
cout<<"gh= "<<z<<endl;
//initialement on ne connait aucun contexte
int taille=0;
//on a la solution aleatoire pour taille=0
int sol=1;
//liste des contextes
vector<int> contexte;

while(sol!=0&&taille<z.size()&&z.size()!=0){
taille=taille+1;
sol=0;//pour la nouvelle taille a n'a pas encore de solution
vector<int> cont;
string b=z.substr(z.size()-taille,taille);
for( int k=0;k<z.size()-taille-1;k++)
{
    if(z.substr(k,taille)==b){cont.push_back(k);sol=1;}
}

if(sol==1){contexte.clear();

for( int k=0;k<cont.size();k++)
{contexte.push_back(cont[k]);}
}
//donc si nouveau contexte sol=1 et contexte contient la liste des contexte de la taille voulue
//sinon sol=0 et contexte contient la liste des contextes de la taille précédente
}
//on a la liste des contextes de taille maximal
//affichons les contextes
if(taille>0){taille=taille-1;}
cout<<"contexte de taille= "<<taille<<endl;
for( int k=0;k<contexte.size();k++)
{cout<<contexte[k]<<" ";}
cout<<endl;

   srand(time(NULL)); // initialisation de rand
    int s=0;
    s=contexte.size();
    if(s==0){//on a aucun contexte de comparaison, donc on choisi aleatoirement
        int b = rand()%3+1; cout<<"aleatoire b= "<<b<<endl;
            if(b==1){Pierre *c=new Pierre; jeu=c->type(); i.push_back(0);return *c;}
            else
                {
                if(b==2){Papier *c=new Papier; jeu=c->type(); i.push_back(1);return *c;}
                else{Ciseaux *c=new Ciseaux; jeu=c->type(); i.push_back(2);return *c;}
                }
    }
    else
    {
        int p=0;int f=0;int c=0;
        for( int k=0;k<contexte.size();k++)
{   int q=contexte[k];
    cout<<z.substr(q+taille+1,1)<<" "<<q+taille+1<<endl;
    if(z.substr(q+taille+1,1)=="P"){p=p+1;}
    if(z.substr(q+taille+1,1)=="F"){f=f+1;}
    if(z.substr(q+taille+1,1)=="C"){c=c+1;}
}
    int d=p+f+c;
    cout<<"p= "<<p<<" f= "<<f<<" c= "<<c<<endl;
    int b=rand()%d+1;
    cout<<"b= "<<b<<endl;
      if(b<p+1){Papier *c=new Papier; jeu=c->type(); i.push_back(1);return *c;}
            else
                {
                if(b<p+f+1){Ciseaux *c=new Ciseaux; jeu=c->type(); i.push_back(2);return *c;}
                else{Pierre *c=new Pierre; jeu=c->type(); i.push_back(0);return *c;}
                }
    }

}
/*
Coup IA::obtenir_coup()
{
    string z="";
    for(int j=0;j<h.size();j++)
    {
        string a="";
        if(i[j]==0){a="p";}
        if(i[j]==1){a="f";}
        if(i[j]==2){a="c";}
        if(h[j]==0){a=a+"P";}
        if(h[j]==1){a=a+"F";}
        if(h[j]==2){a=a+"C";}
        z=z+a;
}
cout<<"gh= "<<z<<endl;
    srand(time(NULL)); // initialisation de rand
    int s=0;
    if(lastcoup!=-1){s=histo[0][lastcoup]+histo[1][lastcoup]+histo[2][lastcoup];}
    if(s==0){
        int b = rand()%3+1; cout<<"aleatoire b= "<<b<<endl;
            if(b==1){Pierre *c=new Pierre; jeu=c->type(); i.push_back(0);return *c;}
            else
                {
                if(b==2){Papier *c=new Papier; jeu=c->type(); i.push_back(1);return *c;}
                else{Ciseaux *c=new Ciseaux; jeu=c->type(); i.push_back(2);return *c;}
                }
    }
    else
    {
        cout<<"s= "<<s<<" "<<histo[0][lastcoup]<<"|||"<<histo[1][lastcoup]<<"|||"<<histo[2][lastcoup]<<endl;
    int b=rand()%s+1;
    cout<<"b= "<<b<<endl;
      if(b<histo[0][lastcoup]+1){Papier *c=new Papier; jeu=c->type(); i.push_back(1);return *c;}
            else
                {
                if(b<histo[0][lastcoup]+1+histo[1][lastcoup]){Ciseaux *c=new Ciseaux; jeu=c->type(); i.push_back(2);return *c;}
                else{Pierre *c=new Pierre; jeu=c->type(); i.push_back(0);return *c;}
                }
    }

}*/

void IA::archive(Coup c)
{
    string a;
    a=c.type();
    if(lastcoup==-1){
     if(a=="Pierre"){lastcoup=0;}
     if(a=="Papier"){lastcoup=1;}
     if(a=="Ciseaux"){lastcoup=2;}
     }
     else
     {
     if(a=="Pierre"){histo[0][lastcoup]=histo[0][lastcoup]+1;lastcoup=0;}
     if(a=="Papier"){histo[1][lastcoup]=histo[1][lastcoup]+1;lastcoup=1;}
     if(a=="Ciseaux"){histo[2][lastcoup]=histo[2][lastcoup]+1;lastcoup=2;}
     }
     /*cout<<histo[0][0]<<"||"<<histo[0][1]<<"||"<<histo[0][2]<<"||"<<endl;
     cout<<histo[1][0]<<"||"<<histo[1][1]<<"||"<<histo[1][2]<<"||"<<endl;
     cout<<histo[2][0]<<"||"<<histo[2][1]<<"||"<<histo[2][2]<<"||"<<endl;
     cout<<"lastcoup= "<<lastcoup+1<<endl;*/

     h.push_back(lastcoup);
    /* cout<<"historique"<<endl;
     for(int j=0;j<h.size();j++)
     {
         cout<<h[j]<<" ";
     }
     cout<<endl;*/
     for(int j=0;j<i.size();j++)
     {
         cout<<i[j]<<" ";
     }
}
