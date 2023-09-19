#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

double distanceEuclidienne(struct Point p1, struct Point p2) {
    double dx, dy;
    dx = p2.x - p1.x;
    dy = p2.y - p1.y;

    return sqrt(dx * dx + dy * dy);
}

int main() {
    struct Point point1, point2;

    printf("Entrez les coordonnées du premier point (x1 y1) :");
    scanf("%lf %lf", &point1.x, &point1.y);

    printf("Entrez les coordonnées du premier point (x2 y2) :");
    scanf("%lf %lf", &point2.x, &point2.y);

    double distance = distanceEuclidienne(point1, point2);

    printf("La distance euclidienne entre les deux points est : %.2lf\n", distance);

    return 0;
}
