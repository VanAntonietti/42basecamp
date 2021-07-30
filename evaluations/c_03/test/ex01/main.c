#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char one[] = "alterb";
	char two[] = "alter";
	char three[] = "2";
	unsigned int b = 2;
	int i;

	i = ft_strncmp(one, one, b);
	printf("first %d characters:\n", b);
	printf("'%s' - '%s'\t= %d\n", one, one, i);

	i = ft_strncmp(one, three, b);
	printf("'%s' - '%s'\t= %d\n", one, three, i);

	i = ft_strncmp(one, two, b);
	printf("'%s' - '%s'\t= %d\n", one, two, i);

	i = ft_strncmp(two, one, b);
	printf("'%s' - '%s'\t= %d\n", two, one, i);

	i = ft_strncmp(three, one, b);
	printf("'%s' - '%s'\t= %d\n", three, one, i);
}