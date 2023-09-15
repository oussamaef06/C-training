#include<stdio.h>


int	main()
{	

	int	i;
	int	nb;

	while (1)
	{
		i = 3;

		printf("Entrer un nombre : \n");
		scanf("%d", &nb);

		if ((nb <= 1) || (nb % 2 == 0)){
			printf("Ce n'est pas un nombre premier 1\n");
			//return 0;
		}
		else if (nb == 2)
		{
			printf("Ce nombre est premier 1\n");
			//return 1;
		}
		else if (nb % 2 != 0)
		{
			while (i < nb)
			{
				if ((nb % i) == 0){
					printf("ce n'est pas un nombre premier 2\n");
					break;
				}
				i++;
			}
			if (i == nb)
				printf("Ce nombre est premier 2\n");
		} 
	}
		return 0;
}
