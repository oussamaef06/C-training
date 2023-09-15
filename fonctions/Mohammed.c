#include <stdio.h>

float Min(float a, float b) {

  if(a < b){
    return a;
  }else{
        return b;
  }
}

float Max(float a, float b) {

  if(a > b){
    return a;
  }else{
        return b;
  }
}

int main() {
  float n1, n2, n3, n4;
  printf("entrer le premier nombre: \t");
  scanf("%f", &n1);
  printf("entrer le deuxieme nombre: \t");
  scanf("%f", &n2);
  printf("entrer le troixieme nombre: \t");
  scanf("%f", &n3);
  printf("entrer le quatrieme nombre: \t");
  scanf("%f", &n4);
  float chfMin = Min(n1, n2);
  float chsMin = Min(n3, n4);
  float Mini = Min(chfMin, chsMin);
  float chfMax = Max(n1, n2);
  float chsMax = Max(n3, n4);
  float Maxi = Max(chfMax, chsMax);
  printf("le Numero Min est: \t %f", Mini);
  printf("\n le Numero Max est: \t %f \n", Maxi);
        return 0;

}
