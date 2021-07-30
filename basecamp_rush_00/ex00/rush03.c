#include <unistd.h>

void	ft_putchar(char c);

void	head(int x, int y)
{	
	int	i;

	i = 0;
	if (x > 0 && y > 0)
	{
		ft_putchar ('A');
	}
	while (i < x - 2 && y > 0)
	{
		ft_putchar ('B');
		i++;
	}
	if (x > 1 && y > 0)
	{	
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	body(int x, int y)
{
	int	i;
	int	j;

	j = y - 2;
	while (j > 0)
	{	
		ft_putchar('B');
		i = x - 2;
		while (i > 0)
		{
			ft_putchar(' ');
			i--;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		ft_putchar ('\n');
		j--;
	}		
}		

void	tail(int x, int y)
{	
	int	i;

	if (x > 0 && y > 1)
	{
		ft_putchar ('A');
	}
	i = 0;
	while (i < x - 2 && y > 1)
	{
		ft_putchar ('B');
		i++;
	}
	if (x > 1 && y > 1)
	{
		ft_putchar('C');
	}
	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y <= 0 || x <= 0)
	{
		write (1, "Valor invalido, x e y precisam ser maior que zero!\n", 52);
	}
	else
	{
		head(x, y);
		body(x, y);
		tail(x, y);
	}
}
