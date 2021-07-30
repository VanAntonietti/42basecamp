#include <stdio.h>

int	ft_iterative_factorial(int nb);

int		main(void)
{
	int n = 1;
	int fat;

	fat = ft_iterative_factorial(n);

	printf("fatorial de %d é: %d", n, fat);
}