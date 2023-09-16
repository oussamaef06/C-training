#include <stdio.h>

void bullet(int inc, int Siz, int tab[]) {
  for (inc = 0; inc < Siz; inc++) {
    for (int j = 0; j < Siz - inc - 1; j++) {
      if (tab[j] > tab[j + 1]) {
        int tm = tab[j];
        tab[j] = tab[j + 1];
        tab[j + 1] = tm;
      }
    }
  }
}

int main() {
  int tm, Siz;

  printf("Donnez la taille du tableau: ");
  scanf("%d", &Siz);
  
  int tab[Siz];
  
  for (int inc = 0; inc < Siz; inc++) {
    printf("Donnez la valeur numero %d: ", inc + 1);
    scanf("%d", &tab[inc]);
  }
  
  reuse(0, Siz, tab);
  
  printf("Le tableau trie: ");
  for (int inc = 0; inc < Siz; inc++) {
    printf("%d \n ", tab[inc]);
  }
  
  return 0;
}

