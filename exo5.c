/*Écrire un sous-programme qui, à partir de deux tableaux de même taille
respective N1 = 150 et N2 = 30, retourne le résultat SOM. Pour calculer
SOM, il faut multiplier chaque élément du premier tableau par chaque
élément du deuxième tableau, et additionner le tout.*/

#include <stdio.h>
#include "fonctiontableau.h"

int main() {
    // Déclaration et initialisation des tableaux
    int tableau1[150] = {/* votre contenu ici */};
    int tableau2[30] = {/* votre contenu ici */};

    // Appel de la fonction pour calculer la somme
    int somme = calculerSomme(tableau1, tableau2, 150 * 30);

    // Affichage du résultat
    printf("La somme des produits des éléments des deux tableaux est : %d\n", somme);
    
    return 0;
}