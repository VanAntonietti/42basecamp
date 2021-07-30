#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char str[] = "Ola amigos";
	char buffer[20];
	char *p;
	int n = sizeof(str) / sizeof(str[0]);

	p = ft_strncpy(buffer, str, n);

	printf("valor de buffer: %s\n", buffer);
	printf("valor de p: %s\n", p);


	return (0);
}