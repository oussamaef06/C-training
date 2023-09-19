#include <stdio.h>
#include <stdlib.h>

struct Personne
{
    char nom[20];
    int age;
};

int main(){
    struct Personne P1;
    printf("Entrez le nom:");
    scanf("%s", &P1.nom[0]);
    printf("Entrez l\'age:");
    scanf("%d", &P1.age);
    printf("Nom: %s\n",P1.nom);
    printf("Age: %d\n",P1.age);
    return 0;
}