#include <stdio.h>

struct Employe {
	char Nom[20];
	float SalaireH;
	float Salaire;
	int heur;

};

int main() {

struct Employe Emp;

float Salairi, fs;
int hr;

printf("veulliez entre votre nom: ");
fgets(Emp.Nom, 20, stdin);
printf("entre votre salaire horaire: ");
scanf("%f", &Salairi);
Emp.SalaireH = Salairi;
printf("entre combien d'heure tu travaile: ");
scanf("%d", &hr);
Emp.heur = hr;
fs = Salairi * hr;
Emp.Salaire = fs;

printf("Nom de l'employé : %s ", Emp.Nom);
printf("Salaire Total: %.2f \n", Emp.Salaire);














}

