#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	za;

	za = 'z';
	while (za >= 'a')
	{
		write(1, &za, 1);
		za--;
	}
}
