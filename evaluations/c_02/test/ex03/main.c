#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char num[] = "0123456789";
	char str[] = "angerandhate";
	char alpha[] = "P0WERRRRR";
	int is_true;

	is_true = ft_str_is_numeric(num);
	printf("%s is num? %d\n", num, is_true);

	is_true = ft_str_is_numeric(str);
	printf("%s is num? %d\n", str, is_true);

	is_true = ft_str_is_numeric(alpha);
	printf("%s is num? %d\n", alpha, is_true);
}