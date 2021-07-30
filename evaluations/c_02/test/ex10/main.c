
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char			str[] = "Heavenly";
	int				n = sizeof(str)/sizeof(str[0]);
	char			buf[n];
	unsigned int	i;

	i = ft_strlcpy(buf, str, n);
	printf("size: %d\n", i);
	printf("buf value: '%s'\n", buf);
	printf("buf last character: '%c'\n", buf[n - 1]);
}