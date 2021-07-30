#include <unistd.h>

void	ft_print_comb2(void)
{	
	char	c;
	int		i;
	int		j;

	write (1, "00 01", 5);
	i = 0;
	j = 2;
	while (i < 100 && j < 100)
	{
		write (1, ", ", 2);
		c = i / 10 + '0';
		write (1, &c, 1);
		c = i % 10 + '0';
		write (1, &c, 1);
		write (1, " ", 1);
		c = j / 10 + '0';
		write (1, &c, 1);
		c = j % 10 + '0';
		write (1, &c, 1);
		++j;
		if (j == 100)
		{
			j = ++i + 1;
		}
	}
}
