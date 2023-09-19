#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
}Points;

int main(){
    Points p1,p2;
    float dist_euc;
    printf("Entrez les coordonnées du premier point (x1 y1):");
    scanf("%f%f",  &p1.x, &p1.y);
    printf("Entrez les coordonnées du deuxieme point (x2 y2):");
    scanf("%f%f", &p2.x, &p2.y);
    dist_euc = sqrt(pow((p2.x - p1.x),2)+pow((p2.y - p1.y),2));
    printf("La distance entre les points est :%f \n",dist_euc);
    return 0;
}