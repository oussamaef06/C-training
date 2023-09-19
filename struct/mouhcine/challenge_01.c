#include<stdio.h>

struct personne
{
        char nom[20];
        int age;
};

int main(){
struct personne p1;
printf("Entrez le nom : ");
scanf("%s", p1.nom);
printf("Entrez l'àge : ");
scanf("%d", &p1.age);
printf("Nom : %s\nàge : %d ans\n", p1.nom, p1.age);

}
