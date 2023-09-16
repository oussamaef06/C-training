#include <stdio.h>

int main() {
    int size;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &size);

    int arr[size];

    printf("Entrez les éléments du tableau : \n");
    for (int i = 0; i < size; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

   
    printf("Tableau trié dans l'ordre croissant : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
