#include<stdio.h>

int main(){

	int mois;

	printf("entrer un mois pour savoir de quel saison appartient-il : \n");
	scanf("%d", &mois);
	if (mois > 12 || mois <= 0)
		printf("ce mois n'existe pas !\n");
	switch (mois){
	case 1 ... 3:
		printf("HIVER\n");
		break;
	case 4 ... 6:
		printf("PRINTEMPS\n");
		break;
	case 7 ... 9:
		printf("Été\n");
		break;
	case 10 ... 12:
		printf("AUTOMNE\n");
		break;
}
	return 0;
}
