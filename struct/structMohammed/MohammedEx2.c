#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

double distance(struct Point p1, struct Point p2) {
    double f1 = pow((p2.x - p1.x), 2);
    double f2 = pow((p2.y - p1.y), 2);
    double distant = sqrt(f1 + f2);

	return distant;
}

int main() {
    struct Point p1, p2;

    printf("Entrez les coordonnées du premier point (x1 y1) : ");
    scanf("%lf %lf", &p1.x, &p1.y);

    printf("Entrez les coordonnées du deuxième point (x2 y2) : ");
    scanf("%lf %lf", &p2.x, &p2.y);

    double dist = distance(p1, p2);
    printf("La distance entre les points est : %.5lf\n", dist);

    return 0;
}
