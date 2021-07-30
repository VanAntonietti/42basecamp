#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char num[] = "0123456789";
	char empty[] = "";
	char str[] = "DarKTranquility";
	char upper[] = "INSOMNIUM";
	char *p;
	
	printf("'%s' >> ", num);
	p = ft_strlowcase(num);
	printf("'%s'\n", p);

	printf("'%s' >> ", empty);
	p = ft_strlowcase(empty);
	printf("'%s'\n", p);

	printf("'%s' >> ", str);
	p = ft_strlowcase(str);
	printf("'%s'\n", p);

	printf("'%s' >> ", upper);
	p = ft_strlowcase(upper);
	printf("'%s'\n", p);
}