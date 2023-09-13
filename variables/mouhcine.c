#include<stdbool.h>
#include<stdio.h>


char nom[8] = "mouhcine";
int age;
float size = 18.5;
bool a = true;
bool b = false;

int main(){
	printf("Nom : %s\nsize : %f\na : %d\nb : %d\n", nom, size, a, b);
	printf("age : ");
	scanf("%d", &age);
	return 0;
}
