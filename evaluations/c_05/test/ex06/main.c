#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	int	n = 0;
	int is_prime = 0;

	printf("type a number: ");
	scanf("%d", &n);

	is_prime = ft_is_prime(n);

	if (is_prime)
		printf("%d is prime\n", n);
	else
		printf("%d is not prime\n", n);
}
