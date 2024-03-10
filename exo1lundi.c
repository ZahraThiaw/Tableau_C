/*  1- Saisie tableau (Arrét par réponse oui ou non)
    2- Trier tableau (a-ordre croissant, b-ordre décroissant)
    3-Transfert nombre>10 sans doublon 
    4-Quitter  
    */

#include <stdio.h>
#include "fonctiontableau.h"
#include <stdbool.h>
#include <string.h>

int main() {
    int taille =0;
    int tableau[15];
    int choix;
    do {
        printf("\nMenu:\n");
        printf("1- Saisir tableau\n");
        printf("2- Trier tableau (a-ordre croissant, b-ordre décroissant)\n");
        printf("3- Transfert nombre > 10 sans doublon\n");
        printf("4- Quitter\n");
        printf("Choisissez une option : \n");
        scanf("%d", &choix);
        while ((getchar()) != '\n');
        
        if (choix==1){
            saisirTableauNombrePaire(tableau, &taille);
            afficherTableau(tableau, taille);
        }
        else if(choix==2 && taille>0){
            char choixtri;
                printf("\nChoisir l'ordre de tri\n");
                printf("a-ordre croissant\n");
                printf("b-ordre décroissant)\n");
                printf("Choisissez une option : \n");
                scanf("%c", &choixtri);
                if (choixtri=='a')
                {
                    triCroissant(tableau, taille);
                    afficherTableau(tableau, taille);
                }
                else if(choixtri=='b'){
                    triDecroissant(tableau, taille);
                    afficherTableau(tableau, taille);
                }
                else{
                    printf("Choix non disponible\n");
                     printf("Choisissez une option : \n");
                    scanf("%c", &choixtri);
                }
        }
        else if(choix==3 && taille>0){
            transfertSansDoublon(tableau, taille);
        }

        if((choix==2 && taille==0) || (choix==3 && taille==0)){
            printf("Veuillez d'abord saisir le tableau\n");
        }
    } while (choix != 4);

    return 0;
}
