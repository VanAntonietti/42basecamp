#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	int	n = 0;
	int next_prime = 0;

	printf("type a number: ");
	scanf("%d", &n);

	next_prime = ft_find_next_prime(n);


	printf("the next prime is: %d\n", next_prime);
}