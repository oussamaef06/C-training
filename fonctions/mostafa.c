#include <stdio.h>
#include <stdlib.h>

float max(float a,float b){
    if (a>b)
        return a;
    else 
        return b;
}
float min(float a,float b){
    if (a>b)
        return b;
    else 
        return a;
}

int main(){
    float a[4],M,m;
    for (int i = 0; i < 4; i++){
        printf("donner 4 nbr pour comparer:");
        scanf("%f",&a[i]);
    }
    M = max(max(a[0],a[1]),max(a[2],a[3]));
    m = min(min(a[0],a[1]),min(a[2],a[3]));
    printf("le maximum est : %f \n",M);
    printf("le minimum est : %f \n",m);
    return 0;
}