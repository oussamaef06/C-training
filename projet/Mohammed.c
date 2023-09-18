#include <stdio.h>
#include <string.h>

double pown(double p, double p1) {
    double count = 1;
    
    if (p1 == 0) {
        return 1;
    }
    
    if (p1 == 1) {
        return p;
    } 
    
    if (p < 0 && ((int)p1) % 2 == 0) {
        p = -p;
    }
    
    for (int i = 1; i <= p1; i++) {
        count *= p;
    }
    
    return count;
}

int sqrtn(int s) {
    for(int i = 1; i < s; i++) {
        if((i * i) == s){
            s = i;
            continue;
        }
    }
    return s;
}

double calculation(double num1, double num2, const char *operator) {
    if(strcmp(operator, "+") == 0)
        return (num1 + num2);
    else if(strcmp(operator, "-") == 0)
        return(num1 - num2);
    else if(strcmp(operator, "*") == 0)
        return (num1 * num2);
    else if(strcmp(operator, "/") == 0)
        return (num1 / num2);
    else 
        return 0;
}

int main() {
    char operator[5], choix[5];

    printf("Bonjour, bienvenue sur le programme de calcul !\n");
    printf("Pour initialiser une operation arithmetique, repondez [Yes/No]: ");
    scanf("%s", choix);

    while(strcmp(choix, "Yes") == 0){
        printf("Veuillez entrer l'operateur de l'operation (+, -, *, /) ou (sqrt) ou (pow): ");
        scanf("%s", operator);
    
        if(strcmp(operator, "pow") == 0) {
            double num, power;
            printf("Veuillez entrer le nombre sur lequel vous souhaitez effectuer la puissance: ");
            scanf("%lf", &num);
            printf("Veuillez entrer l'exposant: ");
            scanf("%lf", &power);
            printf("Le resultat est: %.2lf\n", pown(num, power));
        }

        if(strcmp(operator, "sqrt") == 0){
            int sqrt1;
            printf("Veuillez entrer le nombre sur lequel vous souhaitez effectuer la racine carree: ");
            scanf("%d", &sqrt1);
            printf("Le resultat est: %d\n", sqrtn(sqrt1));
        }

        else if((strcmp(operator, "pow") && strcmp(operator, "sqrt")) != 0){
            double num1, num2;
            printf("Veuillez entrer le premier nombre: ");
            scanf("%lf", &num1);
            printf("Veuillez entrer le deuxième nombre: ");
            scanf("%lf", &num2);
            printf("Le resultat est: %.2lf\n", calculation(num1, num2, operator));
        }

        printf("Voulez-vous effectuer une autre operation ? Repondez [Yes] ou [No]: ");
        scanf("%s", choix);
    }

    return 0;
}
