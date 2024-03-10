/*1-Saisi+tri de deux tableaux (choix entre ordre croissant ou décroissant ou non)(arret par saisi d'un nombre déja saisi)
    2-Transfert (a-fusion; b-intersection(pas de doublon); c-différence(T1-T2; T2-T1) pas de doublon)
    3-Quitter*/

#include <stdio.h>
#include <stdlib.h>
#include "fonctiontableau.h"


int main() {
    int choix;
    int taille1 = 0, taille2 = 0;
    int tableau1[10], tableau2[10];
    int i;
    do {
        printf("\nMenu :\n");
        printf("1. Saisie et tri de deux tableaux\n");
        printf("2. Transfert\n");
        printf("3. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);
        while ((getchar()) != '\n');
        
        if (choix==1){
               char choixtri;
                printf("\nChoisir l'ordre de tri pour le premier tableau\n");
                printf("a-ordre croissant\n");
                printf("b-ordre décroissant)\n");
                printf("c-non)\n");
                printf("Choisissez une option : \n");
                scanf("%c", &choixtri);
                while ((getchar()) != '\n');
                if (choixtri=='a')
                {
                    printf("Saisie et tri du premier tableau :\n");
                    saisieEtTricroissantsansdoublon(tableau1, &taille1);
                    afficherTableau(tableau1, taille1);
                }
                else if(choixtri=='b'){
                    printf("Saisie et tri du premier tableau :\n");
                    saisieEtTridecroissantsansdoublon(tableau1, &taille1);
                    afficherTableau(tableau1, taille1);
                }
                else if(choixtri=='c'){
                    printf("Saisie et tri du premier tableau :\n");
                    saisieEtTrisansdoublon(tableau1, &taille1);
                    afficherTableau(tableau1, taille1);
                }
                else{
                    printf("Choix non disponible\n");
                     printf("Choisissez une option : \n");
                    scanf("%c", &choixtri);
                }
        }
        else if(choix==2 && taille1>0 && taille2>0){
            printf("a. Fusion\n");
            printf("b. Intersection\n");
            printf("c. Difference\n");
            printf("Choix : ");
            char sousChoix;
            scanf(" %c", &sousChoix);
        }
        if(choix==2 && taille1==0 && taille2==0){
            printf("Veuillez d'abord saisir le tableau\n");
        }
    } while (choix != 3);

    return 0;
}
