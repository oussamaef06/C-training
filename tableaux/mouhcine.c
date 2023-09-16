#include<stdio.h>

float note[5];
int i;
float s;

int main(){

for (i = 0;i<5;i++){
	printf("entrer la note de l'etudiant %d : \n", i+1);
	scanf("%f", &note[i]);
	if (note[i] > 20 || note[i] < 0){
		printf("la note est incorrect\n");
		i--;}
s = s + note[i];
}
printf("la moyenne de classe est : %f\n", s/5);
}

