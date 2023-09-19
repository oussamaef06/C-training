#include<stdio.h>

struct employe
{
	char nom[20];
	float s_h;
	float n_h;
};

int main(){
struct employe p1;
printf("Entrez le nom de l'employé: ");
scanf("%s", p1.nom);
printf("Entrez le salaire horaire : ");
scanf("%f", &p1.s_h);
printf("Entrez le nombre d'heures travaillées : ");
scanf("%f", &p1.n_h);
printf("Nom de l'employé : %s\nSalaire total : %.2f ans\n", p1.nom, p1.s_h * p1.n_h);

}
