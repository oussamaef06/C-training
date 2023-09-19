#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nom[20];
    int age;
} etudiant;

int main(){
    etudiant classe[5];
    printf("Bienvenue dans le gestionnaire d'étudiants!\n\n");
    for (int i = 0; i < 5; i++){
        printf("Entrez le nom de l'étudiant:");
        scanf("%s", classe[i].nom);
        printf("Entrez l\'age de l'étudiant:");
        scanf("%d", &classe[i].age);
        printf("Étudiant ajouté avec succès!\n");
    }
    printf("Liste des étudiants :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d.Nom: %s ,Age: %d\n", (i+1), classe[i].nom, classe[i].age);
    }
    
    return 0;
}