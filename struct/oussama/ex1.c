#include <stdio.h>

struct Personne{
char nom[50];
int age;
};

int main(){
struct Personne p1;

printf("entrer votre nom :");
scanf("%s",p1.nom);

printf("entrer votre age :");
scanf("%d",&p1.age);


printf("votre nom est : %s \n", p1.nom);
printf("votre age est : %d \n",p1.age);

return 0;

}
