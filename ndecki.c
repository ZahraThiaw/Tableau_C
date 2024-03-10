#include <stdio.h>
#include "fonctiontableau.h"
int main(){
    int n=2;
    int t[n];
    saisir(t,&n);
    afficherTableau(t, n);
    return 0;
}
