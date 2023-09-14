#include <stdio.h>
#include <string.h>

int main() {
   char choix[100] ;
   int nomber_multiplication, i;

   //mon programme du multiplication
   printf("Bonjour sur  calculata\n");
   printf("tu vas fais un  mutiplication: [Oui/No]\n");
   scanf("%s", choix);
    if(2 == 2) {
        while(strcmp(choix, "Oui") == 0) {
           printf("Entre le nombre de multiplication pour affiche la table du multiplication\n");
           scanf("%d", &nomber_multiplication);
           for(i = 1; i <= 10; i++) {
	      printf("%d * %d = %d\n", i,  nomber_multiplication, i * nomber_multiplication);
	 }
      }
   }
   printf("merci pour utiliser calculata"); 
   return 0;
}
