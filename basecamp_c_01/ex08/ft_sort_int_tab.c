#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab [j] > tab[j + 1])
			{
				k = tab[j];
				tab[j] = tab [j + 1];
				tab[j + 1] = k;
			}
			j++;
		}
		i++;
	}
}
