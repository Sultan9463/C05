#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n1, n2, arr1[MAX_SIZE], arr2[MAX_SIZE], inter[MAX_SIZE];
    int i, j, k = 0, found;

    // Lire la taille et les éléments du premier tableau
    scanf("%d", &n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    // Lire la taille et les éléments du deuxième tableau
    scanf("%d", &n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    // Trouver l'intersection sans doublons
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                // Vérifier si déjà ajouté
                found = 0;
                for(int l = 0; l < k; l++) {
                    if(inter[l] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    inter[k++] = arr1[i];
                }
                break;
            }
        }
    }

    // Afficher le résultat
    printf("Intersection :");
    for(i = 0; i < k; i++)
        printf(" %d ", inter[i]);
    printf("\n");

    return 0;
}
