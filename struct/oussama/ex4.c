#include <stdio.h>

struct Etudiant {
char nom[50];
int age;
};

int main(){
struct Etudiant listEtudiant[5];
int i=0;

printf("Bienvenue dans le gestionnaire d'etudiants!\n");

while(i<5){

printf("\nEntrez le nom de l'etudiant : ");
scanf("%s", listEtudiant[i].nom);

printf("Entrez l'age de l'etudiant : ");
scanf("%d", &listEtudiant[i].age);

printf("Etudiant ajoute avec succes!\n");
i++;
}

printf("\nListe des etudiants :\n");
for(int j =0; j<i;j++){
printf("%d. Nom : %s, Age : %d\n", j+1,listEtudiant[j].nom,listEtudiant[j].age);
}

return 0;

}
