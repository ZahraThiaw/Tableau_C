#include<stdio.h>



// int saisir_un_entier(){
//     int entier;
//     do{
//         printf("donner un entier positif : \n");
//         scanf("%d",&entier);
//         if(entier<=0) printf("entier doit etre positif\n");
//     }while(entier<=0);
//     return entier;
// }
void remplir_tab1(int tab[],int *taille){
    int a;
    int i=0;
    printf("remplir tableau : \n");
    do{
        printf("donner un entier positif");
        scanf("%d",&a);
        if(a>=0) {
            tab[i]=a;
                i++;
            }
    

    }while(a>=0 && i<=*taille);
    *taille=i;
}


void afficher_tab(int tab[],int n){
    int i;
    printf("les valeurs du tableau : \n");
    for(i=0;i<n;i++){
        printf("%d ",tab[i]);
    }
}

// void transfert_paire(int tab[],int tab1[],int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(tab[i]%2==0){
//             tab1[j]=tab[i];
//             j++;
//         }
//     }
// }

// void transfert_paire(int tab[], int tab1[], int n) {
//     int j = 0;
//     for (int i = 0; i < n; i++) {
//         if (tab[i] % 2 == 0) {
//             tab1[j] = tab[i];
//             tab[i] = -1; // Marquer comme déjà récupéré
//             j++;
//         }
//     }
// }

void transfert_paire(int tab[], int tab1[], int n) {
    int *j = 0;
    int deja_recupere[n];
    for (int i = 0; i < n; i++) {
        deja_recupere[i] = 0; // Initialiser à false
    }
    for (int i = 0; i < n; i++) {
        if (tab[i] % 2 == 0 && !deja_recupere[i]) {
            tab1[*j] = tab[i];
            *j++;
            deja_recupere[i] = 1; // Marquer comme déjà récupéré
        }
    }
}


// void valeurexiste(int tab1[], int tab2[], int n){
//     int k=0;
//     for(int j=0;j<n;j++){
//         tab2[0]=tab1[0];
//         if(tab[j]==tab[k]){
//             tab1[j]=tab[i];
//             j++;
//         }
//     }
// }

int main(){
    
    int taille=4;
    int tab[taille];
    remplir_tab1(tab,&taille);
    int tab1[taille];
    transfert_paire(tab,tab1,taille);
    afficher_tab(tab,taille);

    return 0;
}