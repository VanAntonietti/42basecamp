#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	int sqrt = 0;
	int num;
	printf("type a number: ");
	scanf("%d", &num);

	sqrt = ft_sqrt(num);
	printf("sqrt(%d) = %d", num, sqrt);
}