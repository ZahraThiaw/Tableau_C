#include <stdio.h>
#include "fonctiontableau.h"
#include <stdbool.h>
#include <string.h>
#define N 250

int saisirtaille(){
    int taille;
    printf("Saisir la taille du tableau: \n");
    scanf("%d", &taille);
    return taille;
}
void remplirTableau(int tableau[], int taille) {
    int i;
    printf("Veuillez saisir les éléments du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("Element %d : \n", i);
        scanf("%d", &tableau[i]);
    }
}
int sontconsecutifs(int tableau[], int taille) {
    if (taille <= 1) {
        return 1;
    }
    // Trouver la différence entre les éléments adjacents
    int diff = tableau[1] - tableau[0];

    // Parcourir le tableau et vérifier si chaque élément est égal à l'élément précédent plus la différence
    for (int i = 2; i < taille; i++) {
        if (tableau[i] != tableau[i - 1] + diff) {
            return 0; // Les éléments ne sont pas consécutifs
        }
    }
    return 1;
}

void fusionnerTableaux(int tab1[], int taille1, int tab2[], int taille2, int resultat[]) {
    int i = 0, j = 0, k = 0;
    for(i = 0; i < taille1; i++)
    {
        resultat[i] = tab1[i];
    }
        
    int tailleResultat = taille1 + taille2;
    
    for(i = 0, j = taille1; j < tailleResultat && i < taille2; i++, j++)
    {
        resultat[j] = tab2[i];
    }
}

void inversetableau(int tableau[], int taille){
  int debut = 0;
    int fin = taille - 1;
    int temp;
    
    while (debut < fin) {
        // Échanger les éléments debut et fin
        temp = tableau[debut];
        tableau[debut] = tableau[fin];
        tableau[fin] = temp;
        // Déplacer les indices debut et fin vers le centre du tableau
        debut++;
        fin--;
    }
}
void afficherTableau(int tableau[], int taille) {
    printf("[");
    for (int i = 0; i < taille; i++) {
        printf("%d", tableau[i]);
        if (i < taille - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}
void somme_tableaux(int tableau1[], int tableau2[], int resultat[]) {
    for (int i = 0; i < N; i++) {
        resultat[i] = tableau1[i] + tableau2[i];
    }
}
int calculerSomme(int tableau1[], int tableau2[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {
            somme += tableau1[i] * tableau2[j];
        }
    }
    return somme;
}
void remplireTableau(float tableau[], int taille) {
    int i;
    printf("Veuillez saisir les éléments du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("Element %d : \n", i);
        scanf("%f", &tableau[i]);
    }
}
void afficheTableau(float tableau[], int taille) {
    printf("[");
    for (int i = 0; i < taille; i++) {
        printf("%f", tableau[i]);
        if (i < taille - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}
int valeurainserer(){
    float x;
    printf("Saisir la valeur à insérer: \n");
    scanf("%f", &x);
    return x;
}
void insertSorted(float T[], int n, float x) {
    // Trouver l'index où insérer x tout en maintenant le tableau trié
    int i = n - 1;
    while (i >= 0 && T[i] > x) {
        T[i + 1] = T[i];
        i--;
    }
    // Insérer x à la bonne position
    T[i + 1] = x;
    n++;
}
int sommeDiviseurs(int nombre) {
    int somme = 1; // On inclut 1 car c'est toujours un diviseur

    // Parcourir les nombres de 2 à la racine carrée de nombre
    for (int i = 2; i * i <= nombre/2; i++) {
        // Si i est un diviseur de nombre
        if (nombre % i == 0) {
            somme += i;
            // Si i est différent de la racine carrée de nombre, ajouter aussi son "pair"
            if (i != nombre / i) {
                somme += nombre / i;
            }
        }
    }
    return somme;
}
int sontAmis(int nombre1, int nombre2) {
    // Calculer la somme des diviseurs de chaque nombre
    int somme1 = sommeDiviseurs(nombre1); // Exclure le nombre lui-même
    int somme2 = sommeDiviseurs(nombre2); // Exclure le nombre lui-même

    // Vérifier si les nombres sont amis
    if (somme1 == nombre2 && somme2 == nombre1) {
        return 1; // Les nombres sont amis
    } else {
        return 0; // Les nombres ne sont pas amis
    }
}
void saisirTableauNombrePaire(int tableau[], int *taille) {
    printf("Entrez les éléments du tableau :\n");
    char reponse;
    int j=0;
    do {
        int nombre;
        printf("Entrez un nombre : ");
        scanf("%d", &nombre);
        if (nombre % 2 == 0) {
            tableau[j] = nombre;
            (j)++;
            printf("Voulez-vous ajouter un autre élément ? Répondez par 'O' pour oui ou 'N' pour non: ");
            scanf(" %c", &reponse);

            if(reponse=='N'){
                break;
            }
        } else {
            printf("Ce nombre n'est pas pair. Veuillez entrer un nombre pair.\n");
        }
        if (j==15){
            break;
        }
    } while (reponse != 'N' || j<15);
    *taille=j;
}
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
void triDecroissant(int tableau[], int taille) {
    int tmp;
     for (int i=1 ; i <= taille-1; i++) {
        int j = i;
        while (j > 0 && tableau[j-1] < tableau[j]) {
        tmp = tableau[j];
        tableau[j] = tableau[j-1];
        tableau[j-1] = tmp;
        j--;
        }
    }
}
void transfertSansDoublon(int tableau[], int taille) {
    printf("Nombres > 10 sans doublon :\n");
     printf("[");
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
    printf("]\n");
}
void saisiTriCroissant (int tableau[], int *taille){
    int x=0;
    printf("Entrez les éléments du tableau (saisie s'arrête si élément est égale à 0):\n");
    do {
        int nombre;
        printf("Élément %d : ", x);
        scanf("%d", &nombre);
        if (nombre == 0) {
            break;
        }
        tableau[x] = nombre;
        x++;
        // Trie le tableau après chaque saisie
        for (int i = 0; i < x-1; i++) {
            for (int j = i + 1; j < x; j++) {
                if (tableau[i] > tableau[j]) {
                    int temp = tableau[i];
                    tableau[i] = tableau[j];
                    tableau[j] = temp;
                }
            }
        }
    } while (x < 15);
    *taille=x;
}
void inserer(int tableau[], int *taille, int valeur) {
    int i;
    int j= *taille;
    for (i = j - 1; (i >= 0 && tableau[i] > valeur); i--) {
        tableau[i + 1] = tableau[i];
    }
    tableau[i + 1] = valeur;
    (j)++;
    *taille=j;
}
void supprimer(int tableau[], int *taille, int position) {
    int j= *taille;
    if (position < 0 || position >= j) {
        printf("Position invalide.\n");
    }
    for (int i = position; i <j - 1; i++) {
        tableau[i] = tableau[i + 1];
    }
    j--;
    *taille=j;
}
int nombreDejaSaisi(int tableau[], int taille, int nombre) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == nombre) {
            return 1;
        }
    }
    return 0;
}
void saisieEtTricroissantsansdoublon(int tableau[], int *taille) {
    int nombre, i, j;
    int x=0;
    printf("Entrez les nombres (entrez un nombre déjà saisi pour arrêter) :\n");
    do {
        scanf("%d", &nombre);
        int s=nombreDejaSaisi(tableau, *taille, nombre);
        if (s) {
            printf("Ce nombre est déjà saisi. Saisie terminée.\n");
            break;
        }
        tableau[x] = nombre;
        x++;
        
        for (int i = 0; i < x-1; i++) {
                for (int j = i + 1; j < x; j++) {
                    if (tableau[i] > tableau[j]) {
                        int temp = tableau[i];
                        tableau[i] = tableau[j];
                        tableau[j] = temp;
                    }
                }
        }
    } while (x<10);
    *taille=x;
}
void saisieEtTridecroissantsansdoublon(int tableau[], int *taille) {
    int nombre, i, j;
    int x=0;
    printf("Entrez les nombres (entrez un nombre déjà saisi pour arrêter) :\n");
    do {
        scanf("%d", &nombre);
        // Vérifier si le nombre n'est pas déjà présent dans le tableau
        for (i = 0; i < x; i++) {
            if (tableau[i] == nombre) {
                printf("Nombre déjà saisi. Arrêt de la saisie.\n");
                return;
            }
        }
        tableau[x] = nombre;
        x++;
        // Tri du tableau (tri à bulle)
        for (int i=1 ; i <= x-1; i++) {
            int j = i;
            while (j > 0 && tableau[j-1] < tableau[j]) {
            int tmp = tableau[j];
            tableau[j] = tableau[j-1];
            tableau[j-1] = tmp;
            j--;
            }
        }
    } while (1);
    *taille=x;
}
void saisieEtTrisansdoublon(int tableau[], int *taille) {
    int nombre, i, j;
    int x=0;
    printf("Entrez les nombres (entrez un nombre déjà saisi pour arrêter) :\n");
    do {
        scanf("%d", &nombre);
        // Vérifier si le nombre n'est pas déjà présent dans le tableau
        for (i = 0; i < x; i++) {
            if (tableau[i] == nombre) {
                printf("Nombre déjà saisi. Arrêt de la saisie.\n");
                return;
            }
        }
        tableau[x] = nombre;
        x++;
    } while (1);
    *taille=x;
}
void fusionnerTableauxSansDoublon(int tab1[], int taille1, int tab2[], int taille2, int resultat[]) {
    int i, j, k;
    // Copier les éléments du premier tableau dans le tableau résultant
    for(i = 0; i < taille1; i++) {
        resultat[i] = tab1[i];
    }
    // Parcourir le deuxième tableau
    for(i = 0; i < taille2; i++) {
        int doublon = 0; // Indicateur de doublon
        // Vérifier si l'élément est déjà présent dans le tableau résultant
        for(j = 0; j < taille1 + k; j++) {
            if(tab2[i] == resultat[j]) {
                doublon = 1; // Trouvé un doublon
                break;
            }
        }
        // Si l'élément n'est pas un doublon, l'ajouter au tableau résultant
        if(!doublon) {
            resultat[taille1 + k] = tab2[i];
            k++;
        }
    }
}
void intersection(int tableau1[], int taille1, int tableau2[], int taille2) {
    printf("Intersection des tableaux :\n");
    int i, j;
    // Recherche des éléments communs
    printf("Intersection : ");
    for (i = 0; i < taille1; i++) {
        for (j = 0; j < taille2; j++) {
            if (tableau1[i] == tableau2[j]) {
                printf("%d ", tableau1[i]);
                break;
            }
        }
    }
    printf("\n");
}
void differenceT1T2(int tableau1[], int taille1, int tableau2[], int taille2) {
    printf("Différence des tableaux :\n");
    int i, j, found;
    // Difference T1 - T2
    printf("Difference (T1 - T2) : ");
    for (i = 0; i < taille1; i++) {
        found = 0;
        for (j = 0; j < taille2; j++) {
            if (tableau1[i] == tableau2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", tableau1[i]);
        }
    }
    printf("\n");
}
void differenceT2T1(int tableau1[], int taille1, int tableau2[], int taille2) {
    printf("Différence des tableaux :\n");
    int i, j, found;
    // Difference T2 - T1
    printf("\nDifference (T2 - T1) : ");
    for (i = 0; i < taille2; i++) {
        found = 0;
        for (j = 0; j < taille1; j++) {
            if (tableau2[i] == tableau1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", tableau2[i]);
        }
    }
    printf("\n");
}
void affiche(int t[],int n){
      for ( int i = 0; i < n; i++){
        printf("[%d]\n",t[i]);
      }
}

void saisir(int t[],int *n){
    char reponse='o';
    int i=0,a;
   do{ 
        
        if(reponse=='o'&& i<*n ){
            printf("saisir un nombre :");
            scanf("%d",&a);
            if(a%2==0){
                t[i]=a;
                i++;
            }
            if (i==*n){
                printf("Le tableau est remplie\n");
                break;
            }else{
                printf("voulez vous continuer : ");
                scanf(" %c",&reponse); 
            }
        } 

   }while(reponse=='o' && i<*n);
   *n=i;
}