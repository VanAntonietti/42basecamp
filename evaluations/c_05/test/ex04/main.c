#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	int idx = 0;
	int i = 1;
	int seq = 5;

	while (i++ <= seq)
	{
		idx = ft_fibonacci(i);
		printf("%d, ", idx);
	}
	printf("\n");
}