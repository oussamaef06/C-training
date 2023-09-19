#include <stdio.h>
struct Employe{
char nom[50];
float salaire_horaire;
float nb_h_travailler;
};

int main(){

struct Employe emp1;
float resultat;

printf("Nom de l'employé :");
scanf("%s", emp1.nom);

printf("Entrez le salaire horaire :");
scanf("%f", &emp1.salaire_horaire);

printf("Entrez le nombre d'heures travaillées : ");
scanf("%f", &emp1.nb_h_travailler);

resultat = emp1.salaire_horaire * emp1.nb_h_travailler;

printf("Nom de l'employé : %s", emp1.nom);
printf("Salaire total : %.2f \n",resultat);

return 0;

}
