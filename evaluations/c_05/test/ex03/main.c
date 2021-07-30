#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int n = 5;
	int pow = 3;
	int result = 0;

	result = ft_recursive_power(n, pow);
	printf("%d^%d = %d\n", n, pow, result);
}