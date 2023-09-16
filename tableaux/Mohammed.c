#include <stdio.h>
 int main () {

   float Snotes[5], moyenne = 0, somme = 0;
   int i = 0;
   for(i = 0; i <= 4; i++) {
     printf("\n entre votre note: \t");
     scanf("%f", &Snotes[i]);
   }
   for(i = 0; i <= 4; i++) {
     somme += Snotes[i];
   }
   moyenne = somme / 5;
   printf("la moyenne de class est: \t %f \n", moyenne);

	return 0;
 }



