#include<stdio.h>

int main()
{
int n;
int i,j,c;

printf("combien de nombre vous avez saisie ? : ");
scanf("%d",&n);

int tab[n];

printf("entrer les %d nombre pour le trier :\n",n);

for(i=0;i<n;i++){
	scanf("%d", &tab[i]);
	}

for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++){
		if ( tab[i] > tab[j] ) {
		c = tab[i];
		tab[i] = tab[j];
		tab[j] = c;
		}
	}
}

printf("voici les nombre on ordre croissant : ");
for (i=0;i<n;i++){
	printf("%d ", tab[i]);
	}

printf("\n");
}
