/*Écrire un sous-programme qui permet d’inverser un tableau entier.*/

#include <stdio.h>
#include "fonctiontableau.h"

int main() {
    int taille;
    taille=saisirtaille();
    int tableau[taille];
    remplirTableau(tableau, taille);
    inversetableau(tableau, taille);
    afficherTableau(tableau, taille);
    return 0;
}
