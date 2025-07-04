#include <stdio.h>

int main() {
   
    int n, x;
     //lire la taille du tableau
    scanf("%d", &n);
    int tab[n];
     //lire les elements du tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
        //lire l'element à chercher
        scanf("%d", &x);
        // compte la frequence de X
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (tab[i] == x) {
                count++;
            }
        }
        //Afficher le resultat
        printf("L'élément %d apparaît %d fois.\n", x, count);
        return 0;
    }