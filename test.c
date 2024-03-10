#include <stdio.h>
#include <stdbool.h>

// Fonction pour saisir le tableau
void saisirTableau(int tableau[], int *taille) {
    printf("Entrez les éléments du tableau (arrêtez-vous avec -1) :\n");
    int nombre;
    while (true) {
        scanf("%d", &nombre);
        if (nombre == -1)
            break;
        tableau[*taille] = nombre;
        (*taille)++;
    }
}

// Fonction pour trier le tableau en ordre croissant
void triCroissant(int tableau[], int taille) {
    int temp;
    for (int i = 0; i < taille; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (tableau[i] > tableau[j]) {
                temp = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = temp;
            }
        }
    }
}

// Fonction pour trier le tableau en ordre décroissant
void triDecroissant(int tableau[], int taille) {
    int temp;
    for (int i = 0; i < taille; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (tableau[i] < tableau[j]) {
                temp = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = temp;
            }
        }
    }
}

// Fonction pour transférer les nombres > 10 sans doublon
void transfertSansDoublon(int tableau[], int taille) {
    printf("Nombres > 10 sans doublon :\n");
    for (int i = 0; i < taille; i++) {
        if (tableau[i] > 10) {
            bool doublon = false;
            for (int j = 0; j < i; j++) {
                if (tableau[i] == tableau[j]) {
                    doublon = true;
                    break;
                }
            }
            if (!doublon)
                printf("%d ", tableau[i]);
        }
    }
    printf("\n");
}

int main() {
    int tableau[100];
    int taille = 0;
    int choix = 0;

    while (choix != 4) {
        printf("\nMenu:\n");
        printf("1- Saisir tableau\n");
        if (taille > 0) {
            printf("2- Trier tableau (ordre croissant)\n");
            printf("3- Trier tableau (ordre décroissant)\n");
            printf("4- Transfert nombre > 10 sans doublon\n");
        }
        printf("5- Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choix);

        if (choix == 1) {
            saisirTableau(tableau, &taille);
        } else if (choix == 2 && taille > 0) {
            triCroissant(tableau, taille);
        } else if (choix == 3 && taille > 0) {
            triDecroissant(tableau, taille);
        } else if (choix == 4 && taille > 0) {
            transfertSansDoublon(tableau, taille);
        } else if (choix == 5) {
            printf("Au revoir !\n");
        } else {
            printf("Choix invalide ou tableau non saisi.\n");
        }
    }

    return 0;
}
