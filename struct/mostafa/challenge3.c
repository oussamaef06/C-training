#include <stdio.h>
#include <stdlib.h>

struct employee{
    char nom[20];
    float sal_hor;
    float heur_trav;
};

int main(){
    struct employee E;
    printf("Entrez le nom de l'employe:");
    scanf("%s", &E.nom[0]);
    printf("Entrez la salaire horaire:");
    scanf("%f", &E.sal_hor);
    printf("Entrez le nombre d'heures travaillées:");
    scanf("%f", &E.heur_trav);
    printf("Nom de l'employe: %s\n", E.nom);
    printf("salaire totale: %f\n", E.sal_hor * E.heur_trav);
    return 0;
}