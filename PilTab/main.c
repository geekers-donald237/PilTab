//Made by MBIADA_BAYON_IDRIS_21Q2915
#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

int main ()
{
    int x,n,i,p;
    PILE *pile;
    int choix;
    int contin;

    initialisation(pile);
    do{

    printf("\n\t\t\t-->Implémentation d'une pile avec des tablaux\n");
    printf("Pour toutes operations veuillez d'abord effectue une empilation\n");
    printf("\n1--> Empiler \n2--> Dépiler \n3--> Afficher le sommet de la pile \n4--> Verifier si une pile est vide \n5--> Verifier si une pile est pleine \n6--> Vider la pile");
    printf("\nVotre choix: ");
    scanf("%d", &choix);
    if(choix == 1){
        printf("entrer le nombre d'elements a empiler\n");
        scanf("%d",&n);
        for(i = 1;i<=n ;i++){
            printf("\nEnter L'élément à empiler: \n");
            scanf("%d", &x);
            empiler(pile,x);
            printf("la nouvelle pile est : \n");
            Afficher(pile);
            printf("\n");
        }
    }else if (choix == 2){
        printf("entrer le nombre d'elements a depiler\n");
        scanf("%d",&n);
        for(i = 1;i<=n ;i++){
            x=depiler(pile);
            printf("Apres depilation: \n");
            Afficher(pile);
            printf("\n");
        }    
    }else if(choix == 3){
        x=sommet(pile);
        printf("le sommet de la pile est : %d\n",x);
    }else if(choix == 4){
        if(estVide(pile) == 1){
            printf("La pile est Vide rien a faire\n");
        }else{
            printf("votre pile n'est pas vide \n");
        }
    }else if(choix == 5){
        if(estPleine(pile) == 1){
            printf("La pile est pleine rien a faire\n");
        }else {
            printf("La pile n'est pas pleine \n");
        }
    }else if(choix == 6){
        vider(pile);
        printf("la pile vide est :\n");
        Afficher(pile);    
    }else {
        printf("CHOIX NON DISPONIBLE\n");
    }
    printf("\t\t\t--> Voulez vous continuer la partie ?\n--> Tapez 0(Non) ou 1(Oui)\n ");
    scanf("%d",&contin);
    }while(contin);

}
