// MBIADA_BAYON_IDRIS_21Q2915_file_liste
#include <stdio.h>
#include <stdlib.h>
#include "file.h"
#define n 10

File* initialise(File*file)
{   
    file = malloc(sizeof(*file));
    file->tete=0;
    file->queue=0;
    return file;
}


int pleine(File *file)
{ 
    if(file->queue==(n+1)){
        return 1;
    }else{
        return 0;
    }
}


File* enfiler(File *file, int a)
{
  if(pleine(file)==0){
    file->tab[file->queue]= a;
    file->queue=file->queue+1;      
  }else{
    printf("File pleine rien a faire !!\n");
  }
  return file;
}


int vide(File *file)   
{
  if(file->queue == file->tete){
      return 1;
  }else{
      return 0;
  }
}


int defiler(File *file)
{
    int x;
    if(file->queue != file->tete){
        x=file->tab[file->tete];
        file->tete=file->tete+1; 
    }else{
        printf("La file est vide\n");
        x=-1;
    }
    return x;
}



void afficherfile(File *file)
{
    int i;
    if(vide(file)){
        printf("File vide rien a afficher\n");
    }
    else{
        for(i=file->tete;i<file->queue;i++){
		    printf("%d->\t",file->tab[i]);
	    }
	    printf("\n");
    }
	
}


void viderfile(File*file)
{
    file->queue=0;
}

int premier_elmt(File*file){
    if(vide(file))
        exit(1);
    // return tab[file->queue];
    
}


int dernier_elemt(File*file){
    
    if(vide(file))
        exit(1);  
    // return file ->tab[cpt-1];   
}