#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
        // stokage du premier point
        int first  = tab[0];
        
        for (int i = 0; i < n - 1; i++) {
            tab[i] = tab[i + 1];
            // mete le premeier au dernier
        }
            tab[n - 1] = first;

            printf("Tableau après rotation : ");
            for (int i = 0; i < n; i++) {
                printf("%d", tab[i]);
            } 
            printf("\n");
            return 0;
        }