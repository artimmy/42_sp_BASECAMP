#include <unistd.h>
#include <stdlib.h>

int	ft_print();

int	main(void)
{
	ft_print();
}

int	ft_print()
{
	int	i;
	int j;
	
	i = 0;
	j = 0;	
	while (j < 4)
	{
		while (i < 4)
		{
			write (1, "E", 1);
			if (i < 3)
			{
				write (1, " ", 1);
			}
			i++;
		}
		write (1, "\n", 1);
		i = 0;
		j++;
	}
	return (0);
}
