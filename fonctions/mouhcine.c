
#include<stdio.h>

int ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

int ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int main()
{
	int t[4] = {};

	printf("entrer 4 nombre :\n");
	for (int i = 0; i < 4; i++){
	
		scanf("%d", &t[i]);
	}
	printf("le min est : %d\n", ft_min((ft_min(t[0], t[1])), (ft_min(t[2], t[3]))));
	printf("le max est : %d\n", ft_max((ft_max(t[0], t[1])), (ft_max(t[2], t[3]))));
}
