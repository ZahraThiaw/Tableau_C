/*Écrire un sous-programme qui permet de tester si deux nombres sont AMIS
ou pas.
Deux nombres M et N sont amis si la somme des diviseurs de N excepté 1 et
lui-même est égale à M et la somme des diviseurs de M excepté 1 et
lui-même est égale à N.
Exemple : les nombres 48 et 75 sont deux nombres amis puisque :
Les diviseurs de 48 sont : 2, 3, 4, 6, 8, 12, 16, 24 2 +
3 + 4 + 6 + 8 + 12 + 16 + 24 = 75 Les diviseurs de 75
sont : 3, 5, 15, 25 3 + 5 + 15 + 25 = 48.*/

#include <stdio.h>
#include "fonctiontableau.h"


int main() {
    int nombre1, nombre2;

    // Saisie des nombres
    printf("Entrez deux nombres : ");
    scanf("%d %d", &nombre1, &nombre2);

    // Vérifier si les nombres sont amis
    if (sontAmis(nombre1, nombre2)) {
        printf("%d et %d sont des nombres amis.\n", nombre1, nombre2);
    } else {
        printf("%d et %d ne sont pas des nombres amis.\n", nombre1, nombre2);
    }

    return 0;
}