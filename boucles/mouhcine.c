#include<stdio.h>

int	main()
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	if (nb % 2 != 0)
	{
		while (i < nb)
		{
			if ((nb % i) == 0)
				return (0);
			i += 2;
		}
		return (1);
	}
	return (0);
}
