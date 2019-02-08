#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main()
//BUT : lire ou écrire le fichier
//ENTREES : le fichier ainsi que les input de l'utilisateur
//SORTIES : le fichier écrit ou lu
{
    int choix;
    id* id;

    printf("Bonjour, tapez 1 pour lire, et 2 pour ecrire : ");
    scanf("%d", &choix);

    printf("Votre choix : %d\n", choix);
    if (choix == 1) {
        id = readID("test.txt");
        printID(id);
    }
    else if(choix == 2) {
        id = scanID();
        printID(id);
        writeID(id, "test.txt");
    }
    else {
        printf("Erreur: choix inconnu.\n");
    }
    getc(stdin);
    return 0;
}
