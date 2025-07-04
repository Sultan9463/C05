#include <stdio.h>

int main() {
    int n1, n2;
    // Lire la taille du premier tableau
    scanf("%d", &n1);
    //lire les elements du premier tableau
    int tab1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }
    // Lire la taille du deuxieme tableau
    scanf("%d", &n2);
    int tab2[n2];
    //lire les elements du deuxieme tableau
    for (int i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }
        // creer le tableau fussionné
        int fusion[n1 + n2];
    
        // creer les elements du premier tableaux

    for (int i = 0; i < n1; i++) {
        fusion[i] = tab1[i];
    }
        // Copier les elements du deuxieme Tableau
    for (int i = 0; i < n2; i++) {
        fusion[n1 + i] = tab2[i];
        }
        // Afficher le tableau fussionné
        printf ("Tableau fusionné : ");
       for (int i = 0; i < n1 + n2; i++) {
            printf("%d", fusion[i]);
        }
        printf("\n");
        return 0;
    }