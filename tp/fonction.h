#ifndef __FONCTION__H__
#define __FONCTION_H__
#define MAX 50



typedef struct pile
{
    int tab[MAX];
    int sommet;
} PILE;


void initialisation(PILE *p);

int estVide(PILE *p);

int estPleine(PILE *P);

void empiler(PILE *P, int c);

int depiler(PILE *p);

int sommet(PILE *p);

void Afficher(PILE *p);

void vider(PILE*p);



#endif