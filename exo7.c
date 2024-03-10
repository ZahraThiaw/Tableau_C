/*Soit T un tableau qui contient n valeurs réelles triés dans l’ordre croissant.
Ecrire une procédure
qui prend comme paramètre le Tableau T, l’entier n (la taille de T) et un
nombre réel x, et elle effectue l’insertion de x dans le tableau T, de telle
manière que le tableau T reste trié.*/

#include <stdio.h>
#include "fonctiontableau.h"

int main() {
    // Exemple d'utilisation
    int n=0; // Taille du tableau
    float T[n]; // Tableau trié par ordre croissant
    float x; // Nombre réel à insérer
    n= saisirtaille();
    remplireTableau(T, n);
    // Affichage du tableau avant l'insertion
    printf("Tableau initial");
    afficheTableau(T, n);
    x=valeurainserer();
    // Insertion de x dans le tableau trié T
    insertSorted(T, n, x);
    n++; // Augmenter la taille du tableau
    printf("Tableau aprés insertion de la valeur de x");
    // Affichage du tableau après l'insertion
    afficheTableau(T, n);
    
    return 0;
}