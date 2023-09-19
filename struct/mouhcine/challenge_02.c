#include<stdio.h>
#include<math.h>


struct point
{
	float x1,y1;
	float x2,y2;
};

int main(){
struct point p;
printf("Entrez les coordonnées du premier point (x1 y1): ");
scanf("%f%f", &p.x1, &p.y1);
printf("Entrez les coordonnées du premier point (x2 y2): ");
scanf("%f%f", &p.x2, &p.y2);
printf("La distance entre les points est : %f\n", sqrt(pow((p.x2 - p.x1), 2) + pow((p.y2 - p.y1), 2)));

}
