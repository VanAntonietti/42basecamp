#include <unistd.h>

void	ft_print(int i, int j, int k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
}

void	ft_space(int i, int j, int k)
{
	if (!(i == '7' && j == '8' && k == '9'))
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{	
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{	
			k = j + 1;
			while (k <= '9')
			{
				ft_print (i, j, k);
				ft_space(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
