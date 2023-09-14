#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    printf("voulez vous connaitre votre mention?\n");
    printf("donner votre note:");
    scanf("%f", &a);
    if(a < 10)
	printf("Bonne chance l\'annee prochaine\n");
    else if(a>=10 && a<12)
        printf("passble!\n");
    else if(a>=12 && a<14)
	printf("assez bien!\n");
    else if(a>=14 && a<16)
        printf("bien!!\n");
    else if(a>=16 && a<20)
        printf("tres bien!!!\n");
    else
	printf("C\'est ne pas une Note >:(\n");
    return 0;
}
