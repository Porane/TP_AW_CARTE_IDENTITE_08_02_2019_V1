#include "fonctions.h"

id* initID()
//BUT : initialiser le fichier
//ENTREES : le fichier
//SORTIES : la fichier initialisé
{
    id* resultat = malloc(sizeof(id));

    resultat->nom = malloc(TAILLE);
    resultat->prenom = malloc(TAILLE);
    resultat->adresse = malloc(TAILLE);
    resultat->ville = malloc(TAILLE);
    resultat->codepostal = malloc(TAILLE);
    resultat->numID = malloc(TAILLE);

    return resultat;
}

id* readID(char *filename)
//BUT : lire le fichier
//ENTREES : le fichier
//SORTIES : le fichier
{
    id* resultat = initID();
    FILE *fichier = fopen(filename, "r");

    fgets(resultat->nom, TAILLE, fichier);
    fgets(resultat->prenom, TAILLE, fichier);
    fgets(resultat->adresse, TAILLE, fichier);
    fgets(resultat->ville, TAILLE, fichier);
    fgets(resultat->codepostal, TAILLE, fichier);
    fgets(resultat->numID, TAILLE, fichier);
    fclose(fichier);

    return resultat;
}

void writeID(id *id, char *filename)
//BUT : écrire dans le fichier
//ENTREES : le fichier
//SORTIES : le fichier écrit
{
    FILE *fichier = fopen(filename, "w+");

    fputs(id->nom, fichier);
    fputs(id->prenom, fichier);
    fputs(id->adresse, fichier);
    fputs(id->ville, fichier);
    fputs(id->codepostal, fichier);
    fputs(id->numID, fichier);
    fclose(fichier);
}

void printID(id *id)
//BUT : afficher le fichier
//ENTREES : le fichier
//SORTIES : l'affichage du fichier
{
    printf("Nom : %s\n", id->nom);
    printf("Prenom : %s\n", id->prenom);
    printf("Adresse : %s\n", id->adresse);
    printf("Ville : %s\n", id->ville);
    printf("Code postal : %s\n", id->codepostal);
    printf("Numero carte identite : %s\n", id->numID);
}

id* scanID()
//BUT : écrire dans le fichier
//ENTREES : le fichier
//SORTIES : le fichier écrit
{
    id* resultat = initID();
    printf("Entrez le nom: \n");
    fflush(stdin);
    fgets(resultat->nom, TAILLE, stdin);

    printf("Entrez le prenom: \n");
    fgets(resultat->prenom, TAILLE, stdin);

    printf("Entrez l'adresse: \n");
    fgets(resultat->adresse, TAILLE, stdin);

    printf("Entrez la ville: \n");
    fgets(resultat->ville, TAILLE, stdin);

    printf("Entrez le code postal: \n");
    fgets(resultat->codepostal, TAILLE, stdin);

    printf("Entrez le numero de carte d'identite: \n");
    fgets(resultat->numID, TAILLE, stdin);

    return resultat;
}
