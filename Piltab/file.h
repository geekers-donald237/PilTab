// Made by MBIADA BAYON IDRIS 21Q2915

#ifndef __FILE_H__
#define __FILE_H__
#define n 10
 

typedef struct File File ;
struct File
{ 
    int tete;
    int queue;
    int tab[];
};


File* initialise(File*file);

int pleine(File *file);

File* enfiler(File *file, int x);

int vide(File *file);

int defiler(File *file);

void afficherfile(File *file);

void viderfile(File*file);

int premier_elmt(File*file);

int dernier_elemt(File*file);

#endif
