#include <stdio.h>

int main(){

int nombre;

printf("entrer un nombre : ");
scanf("%d", &nombre);

if(nombre % 2 == 0){
printf("%d est un nombre pair \n", nombre);
}
else {
printf("%d est un nombre impair \n", nombre);
}
}
