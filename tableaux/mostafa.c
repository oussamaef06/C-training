#include <stdio.h>

int main(){
    int i;
    float T[5], somme;

    for(i=0;i<5;i++){
        printf("entrer la note d'etudiant %d : " , i+1);
        scanf("%f",&T[i]);
        if (T[i] < 0 || T[i] > 20){
            printf("la note est incorrect \n");
            i--;
        }
    }
    somme = 0;
    for(i=0;i<5;i++){
        somme = somme + T[i];
    }
    printf("la moyenne des notes est : %.2f \n", somme/5);
    for(i=0;i<5;i++){
        printf("la note d\'etudiant n %d: %.2f \n",i+1,T[i]);
    }
    return 0;
}