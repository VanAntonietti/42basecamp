#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	if (nb <= 9 && nb >= 0)
	{
		ft_putchar (nb + '0');
	}
	else
	{	
		if (nb < 0)
		{
			nb = nb * -1;
			ft_putchar ('-');
		}
		if (nb / 10 > 0)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(nb % 10 + '0');
	}	
}
