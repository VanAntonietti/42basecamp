#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char num[] = "0123456789";
	char empty[] = "";
	char str[] = "ReDDit";
	char upper[] = "REDDIT";
	int is_true;

	is_true = ft_str_is_uppercase(num);
	printf("'%s'\tis uppercase? %d\n", num, is_true);

	is_true = ft_str_is_uppercase(str);
	printf("'%s'\tis uppercase? %d\n", str, is_true);

	is_true = ft_str_is_uppercase(upper);
	printf("'%s'\tis uppercase? %d\n", upper, is_true);

	is_true = ft_str_is_uppercase(empty);
	printf("'%s'\t\tis uppercase? %d\n", empty, is_true);
}