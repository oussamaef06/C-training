#include <stdio.h>
#include <stdlib.h>

double MIN(double a, double b){
if(a<b){
return a;
}else{
return b;
}
}

double MAX(double a, double b){
if(a>b){
return a;
}else{
return b;
}
}

int main (){

double n1,n2,n3,n4;
double minimum, maximum;

printf("entrer le 1er nombre reel : ");
scanf("%lf",&n1);

printf("entrer le 2eme nombre reel : ");
scanf("%lf",&n2);

printf("entrer le 3eme nombre reel : ");
scanf("%lf",&n3);

printf("entrer le 4eme nombre reel : ");
scanf("%lf",&n4);

minimum = MIN(MIN(n1,n2), MIN(n3,n4));
maximum = MAX(MAX(n1,n2), MAX(n3,n4));

printf("le minimum des quatre nombre reels est : %.2lf \n",minimum );
printf("le maximum des quatre nombre reels est : %.2lf \n",maximum);

return 0;

}
