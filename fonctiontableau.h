#ifndef FONCTION_H
#define FONCTION_H

int saisirtaille();
void remplirTableau(int tableau[], int taille);
int sontconsecutifs(int tableau[], int taille);
void fusionnerTableaux(int tab1[], int taille1, int tab2[], int taille2, int resultat[]);
void inversetableau(int tableau[], int taille);
void afficherTableau(int tableau[], int taille);
void somme_tableaux(int tableau1[], int tableau2[], int resultat[]);
void remplireTableau(float tableau[], int taille);
void afficheTableau(float tableau[], int taille);
int valeurainserer();
void insertSorted(float T[], int n, float x);
int sommeDiviseurs(int nombre);
int sontAmis(int nombre1, int nombre2);
void saisirTableauNombrePaire(int tableau[], int *taille);
void triCroissant(int tableau[], int taille);
void triDecroissant(int tableau[], int taille);
void transfertSansDoublon(int tableau[], int taille);
void saisiTriCroissant (int tableau[], int *taille);
void inserer(int arr[], int *n, int valeur);
void supprimer(int tableau[], int *taille, int position);
void saisieEtTricroissantsansdoublon(int tableau[], int *taille);
void saisieEtTridecroissantsansdoublon(int tableau[], int *taille);
void saisieEtTrisansdoublon(int tableau[], int *taille);
void fusion(int tableau1[], int taille1, int tableau2[], int taille2);
void intersection(int tableau1[], int taille1, int tableau2[], int taille2);
void difference(int tableau1[], int taille1, int tableau2[], int taille2);
void affiche(int t[],int n);
void saisir(int t[],int *n);
#endif