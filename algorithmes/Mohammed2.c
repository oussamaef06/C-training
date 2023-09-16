#include <stdio.h>

void insertion(int Siz, int tab[]) {
  for (int i = 1; i < Siz; i++) {
    int key = tab[i];
    int j = i - 1;
    
    while (j >= 0 && tab[j] > key) {
      tab[j + 1] = tab[j];
      j--;
    }
    
    tab[j + 1] = key;
  }
}

int main() {
  int Siz;

  printf("Donnez la taille du tableau: ");
  scanf("%d", &Siz);

  int tab[Siz];

  for (int inc = 0; inc < Siz; inc++) {
    printf("Donnez la valeur numero %d: ", inc + 1);
    scanf("%d", &tab[inc]);
  }

  insertion(Siz, tab);

  printf("Le tableau trie: \n");
  for (int inc = 0; inc < Siz; inc++) {
    printf("%d \n", tab[inc]);
  }

  return 0;
}

