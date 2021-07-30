#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	az;

	az = 'a';
	while (az <= 'z')
	{	
		write(1, &az, 1);
		az++;
	}
}
