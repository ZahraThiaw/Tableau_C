/*Écrire un sous-programme qui permet de faire la fusion de deux tableaux
entiers*/

#include <stdio.h>
#include "fonctiontableau.h"
#include <stdlib.h>

int main() {
    int taille1, taille2;
    taille1=saisirtaille();
    int tableau1[taille1];
    remplirTableau(tableau1, taille1);

    taille2=saisirtaille();
    int tableau2[taille2];
    remplirTableau(tableau2, taille2);
    // Taille du tableau résultant
    int tailleResultat = taille1 + taille2;
    int resultat[tailleResultat];
    // Appel de la fonction pour fusionner les deux tableaux
    fusionnerTableaux(tableau1, taille1, tableau2, taille2, resultat);
    // Affichage du tableau résultant
    afficherTableau(resultat, tailleResultat);
    return 0;
}
