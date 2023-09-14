#include <stdio.h>

int main() {
    printf("Numero du 1 a 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    printf("Numero du 10 a 1:\n");
    for (int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}

