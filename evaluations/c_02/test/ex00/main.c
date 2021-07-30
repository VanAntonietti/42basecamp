#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char str[] = "nenem";
	char buffer[20];
	char *dest;

	dest = ft_strcpy(buffer, str);
	printf("dest: %s\n", dest);
	return (0);
}