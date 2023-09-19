#include <stdio.h>

struct TabEtud{

	char nom[20];
	int age;

};
int main() {
struct  TabEtud Etud[5];

int ag[5];

for(int i = 0; i < 5; i++)
{
   printf("entre le nom de etudient \n");
   scanf("%s", Etud[i].nom);
   printf("entre l'age de etudient \n");
   scanf("%d", &ag[i]);
   Etud[i].age = ag[i];
}

printf("liste des etudient: \n");
for(int i = 0; i < 5; i++)
{
   printf("%d. Nom: %s, Age: %d \n", i+1, Etud[i].nom, Etud[i].age);
}



}
