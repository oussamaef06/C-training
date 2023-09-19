#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personne
{
        char nom[20];
        int age;
};

void trier(struct)
void rechercher(char nom_r[],int n, struct personne liste[]){

int i = 0;
while(i < n){
	if (!strcmp(liste[i].nom, nom_r)){
		printf("\nN° : %d\nNom : %s\nÂge : %d\n\n",i+1,liste[i].nom,liste[i].age);
		break;}
	i++;
	}
if (i == n)
	printf("Ce nom n'est pas sur la liste\n");
}

void ajouter(struct personne liste[],int n){
;
	int i=0;

while(i<n){
        printf("\nEntrez le nom de l'étudiant %d : ",i+1);
        scanf("%s", liste[i].nom);
        printf("Entrez l'àge de l'étudiant %d : ", i+1);
        scanf("%d", &liste[i].age);
        printf("Étudiant ajouté avec succès!\n");
i++;
}
}

int main(){

char nom_r[20];
int n;
char fonction[11];

printf("Entrez le nombre des étudiants : ");
scanf("%d", &n);
struct personne liste[n];
ajouter(liste, n);
while(1){
	printf("Taper la fonction (trier,rechercher) et (x) pour quitter: ");
	scanf("%s", fonction);
	if (!strcmp(fonction, "x"))
		exit (0);
	if (!strcmp(fonction, "rechercher")){
		while(1){
			printf("Entrer le nom de l'étudiant et (r) pour retour au menu: ");
			scanf("%s", nom_r);
			if (!strcmp(nom_r, "r"))
				break;
			rechercher(nom_r, n, liste);}
	}
	else if (!strcmp(fonction, "trier")){
	trier();
	}
}

return(0);
}
