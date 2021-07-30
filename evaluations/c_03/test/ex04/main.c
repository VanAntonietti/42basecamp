#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "Every time the dreams always the same";
	char find[] = "always the same";
	char *c;

	printf("find '%s' in '%s'\n", find, str);
	c = ft_strstr(str, find);
	printf("result: %s\n", c);
}