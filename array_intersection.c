#include <stdio.h>

int main() {
    int a[100], b[100], inter[100];
    int n1, n2, i, j, k = 0;

    scanf("%d", &n1);
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    scanf("%d", &n2);
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                int exist = 0;
                for (int m = 0; m < k; m++) {
                    if (inter[m] == a[i]) {
                        exist = 1;
                        break;
                    }
                }
                if (!exist)
                    inter[k++] = a[i];
                break;
            }
        }
    }

    printf("Intersection : ");
    for (i = 0; i < k; i++) printf("%d ", inter[i]);
    printf("\n");

    return 0;
}
