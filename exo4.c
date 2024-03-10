/*Écrire un sous-programme qui, à partir de deux tableaux de même taille N =
250, crée un autre tableau résultant de la somme des deux premiers
tableaux*/

#include <stdio.h>
#include "fonctiontableau.h"
#define N 250

int main (){

    int tableau1[N];
    int tableau2[N];
    int resultat[N];
    // Initialisation des tableaux (par exemple)
    for (int i = 0; i < N; i++) {
        tableau1[i] = i;
        tableau2[i] = 2 * i;
    }
    // Calcul de la somme des tableaux
    somme_tableaux(tableau1, tableau2, resultat);

    // Affichage du résultat
    afficherTableau(resultat, N);
    return 0;
}