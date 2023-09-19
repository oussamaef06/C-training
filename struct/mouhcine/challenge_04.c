#include<stdio.h>

struct personne
{
        char nom[20];
        int age;
};

int main(){

struct personne liste[5];
int i=0;

while(i<5){
	printf("Entrez le nom de l'étudiant : ");
	scanf("%s", liste[i].nom);
	printf("Entrez l'àge de l'étudiant : ");
	scanf("%d", &liste[i].age);
	printf("Étudiant ajouté avec succès!\n\n");
i++;
}
i = 1;
printf("Liste des étudiants :\n\n");
while(i<6){
	printf("%d.Nom : %s,Âge : %d\n",i,liste[i-1].nom,liste[i-1].age);
	i++;
}
}
