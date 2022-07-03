#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"


void initialisation(PILE *p)
{
    p->sommet = -1;
}

void vider(PILE*p){
    p->sommet = -1;
}

int estVide(PILE *p)
{
    if(p->sommet == -1)
        return 1;
    return 0;
}

int estPleine(PILE *p)
{
    if(p->sommet == MAX-1)
        return 1;
    return 0;
}

void empiler(PILE *p, int c)
{
    if(estPleine(p))
    {
        printf("La pile est pleine\n");
        return;
    }
    p->sommet = p->sommet + 1;
    p->tab[p->sommet] = c; 
}

int  depiler(PILE *p)
{
    int c;
    if(estVide(p))
        return -1;
    c = p->tab[p->sommet];
    p->sommet--;
    return c;
}

int sommet(PILE *p){
    int x;
    if(estVide(p))
        return -1;

    return p->tab[p->sommet];   
}

void Afficher(PILE *p){
   int i;
   if(estVide(p)){
       printf("Pile vide rien a afficher\n");
   }else {
      for(i = p->sommet; i >= 0; i--)
        printf("\n%d", p->tab[i]);
   }
}
