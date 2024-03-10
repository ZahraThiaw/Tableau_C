/* 1-Saisi+tri (ordre croissant)(arrét par saisi de 0)
    2-insérer une valeur
    3-supprimer une valeur à une position donnée
    4-Quitter*/

#include <stdio.h>
#include "fonctiontableau.h"

int main() {
    int taille =0;
    int tableau[15];
    int choix;
    int position;
    do {
        printf("\nMenu:\n");
        printf("1. Saisir et trier (ordre croissant)\n");
        printf("2. Insérer une valeur\n");
        printf("3. Supprimer une valeur à une position donnée\n");
        printf("4. Quitter\n");
        printf("Choix: ");
        scanf("%d", &choix);
        while ((getchar()) != '\n');
        
        if (choix==1){
            saisiTriCroissant (tableau, &taille);
            afficherTableau(tableau, taille);
        }
        else if(choix==2 && taille>0){
            int valeur, position;
            printf("Entrer la valeur à insérer : ");
            scanf("%d", &valeur);
            inserer(tableau, &taille, valeur);
            afficherTableau(tableau, taille);
        }
        else if(choix==3 && taille>0){
            printf("Position de la valeur à supprimer : ");
            scanf("%d", &position);
            supprimer(tableau, &taille, position);
            afficherTableau(tableau, taille);
        }

        if((choix==2 && taille==0) || (choix==3 && taille==0)){
            printf("Veuillez d'abord saisir le tableau\n");
        }
    } while (choix != 4);

    return 0;
}