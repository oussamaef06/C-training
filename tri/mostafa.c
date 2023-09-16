#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    do{
        printf("Entrez la taille de votre tableau : ");
        scanf("%d", &n);
    }while(n < 0);

    int tab[n];
    printf("Entrez les nbrs du tableau a trier : \n");
    for (int i = 0; i < n; i++) {
        printf("Element N°%d : ", i+1);
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < n - 1 ; i++) {
        for (int j = 0; j < n - i - 1 ; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp;
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    printf(" voila votre tableau trié dans l'ordre croissant : \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n");

    return 0;
}
