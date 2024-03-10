/*Écrire un sous-programme qui, à partir d’un tableau d’entier, retourne VRAI
si les éléments du tableau sont consécutifs sinon FAUX.*/

#include <stdio.h>
#include "fonctiontableau.h"


int main(){
    int taille;
    int tableau[taille];
    remplirTableau(tableau, taille);

    if (sontconsecutifs(tableau, taille)) {
        printf("Les éléments du tableau sont consécutifs.\n");
    } else {
        printf("Les éléments du tableau ne sont pas consécutifs.\n");
    }
    return 0;
}
