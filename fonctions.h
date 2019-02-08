#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define TAILLE 30

typedef struct id{
    char *nom;
    char *prenom;
    char *adresse;
    char *ville;
    char *codepostal;
    char *numID;
}id;

extern id* initID();
extern id* readID(char *filename);
extern void writeID(id *id, char *filename);
extern id* scanID();
extern void printID(id *id);

#endif // FONCTIONS_H_INCLUDED
