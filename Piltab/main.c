// MBIADA_BAYON_IDRIS_21Q2915
#include <stdio.h>
#include <stdlib.h>
#include "file.h"
#define n 10
int main()
{    
  
    int i ,tab[n];
    int x,p,m, choix ,contin;

    do{

      File *f = initialise(f);
      printf("\n\t\t\t-->Implémentation d'une file avec des tableaux\n");
      printf("Pour toutes operations veuillez d'abord effectue une enfilation\n");
      printf("\n1--> Enfiler \n2--> Défiler \n3--> Afficher le dernier elemt  de la file \n4--> Afficher le premier elemt  de la file \n5--> Verifier si une file est vide \n6--> Vider la file");
      printf("\nVotre choix: ");
      scanf("%d", &choix);

      if(choix == 1){
        printf("entrer le nombre d'elements a enfiler\n");
        scanf("%d",&m);
        for(i = 1;i<=m ;i++){
          printf("\nEnter L'élément à enfiler: \n");
          scanf("%d", &x);
          enfiler(f,x);
          printf("la nouvelle file  est : \n");
          afficherfile(f);
          printf("\n");
        }
      }else if (choix == 2){
          printf("entrer le nombre d'elements a defiler\n");
          scanf("%d",&m);
          for(i = 1;i<=m ;i++){
            p=defiler(f);
            printf("Apres defilation: \n");
            afficherfile(f);
            printf("\n");
          }    
      }else if(choix == 3){
          x = dernier_elemt(f);
          printf("le dernier element de la file est : %d\n",x);
      }else if(choix == 4){
          x=premier_elmt(f);
          printf("le premier element de la file est : %d\n",x);
          
      }else if(choix == 5){
          if(vide(f) == 1){
            printf("La file est Vide rien a faire\n");
          }else{
            printf("votre file n'est pas vide \n");
          }
      }else if(choix == 6){
          viderfile(f);
          afficherfile(f);    
      }else {
          printf("CHOIX NON DISPONIBLE\n");
      }
      printf("\t\t\t--> Voulez vous continuer la partie ?\n--> Tapez 0(Non) ou 1(Oui)\n ");
      scanf("%d",&contin);
    }while(contin);
  
  return 0;
}


