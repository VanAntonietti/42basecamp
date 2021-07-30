#include <unistd.c>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	argc = argc + 1;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
