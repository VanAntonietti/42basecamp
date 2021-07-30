#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char str[] = "powerrrr";
	char buf[25] = "lemillion ";
	char *dest;

	dest = ft_strcat(buf, str);

	printf("buf: '%s'\n", dest);
}