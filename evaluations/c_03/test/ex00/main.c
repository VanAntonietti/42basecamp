#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char one[] = "rick";
	char two[] = "morty";
	char three[] = "and";
	int i;

	i = ft_strcmp(one, one);
	printf("s: '%s' - '%s' = '%d'\n", one, one, i);

	i = ft_strcmp(one, three);
	printf("s: '%s' - '%s' = '%d'\n", one, three, i);

	i = ft_strcmp(one, two);
	printf("s: '%s' - '%s' = '%d'\n", one, two, i);

	i = ft_strcmp(two, one);
	printf("s: '%s' - '%s' = '%d'\n", two, one, i);
}