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
        // Afficher les elements communs
        for (int i = 0; i < n1; i++) {
            int courant = tab1[i];
            int deja_afficher = 0;
            // verifie si deja_afficher 
                for (int k = 0; k < i; k++) {
                    if (tab1[k] == courant) {
                    deja_afficher = 1;
                    break;
                }
            }
            if (deja_afficher) continue;
            // chercher si courant existe dant tab2 
            for (int j = 0; j < n2; j++) {
                if (courant == tab2[j]) {
                    printf("%d", courant);
                    break;
                }
            }   
        }
        printf("\n");
        return 0;
    }   