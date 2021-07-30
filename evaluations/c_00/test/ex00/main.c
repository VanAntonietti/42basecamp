#include <stdio.h>

void	ft_putchar(char c);

int	main(void)
{
	int	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
	return (0);
}
