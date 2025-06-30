#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    // trouver le plus petit element
    int min = tab[0];
    for (int i = 0; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    // afficher le plus petit
    printf("Le minimum est : %d\n", min);
    return 0;
}