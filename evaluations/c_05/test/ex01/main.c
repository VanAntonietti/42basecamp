#include <stdio.h>
int		ft_recursive_factorial(int nb);

int		main(void)
{
	int n = 3;
	int fat;

	fat = ft_recursive_factorial(n);

	printf("fatorial de %d é: %d", n, fat);
}