#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char num[] = "0123456789";
	char empty[] = "";
	char str[] = "ReddIT";
	char upper[] = "REDDIT";
	char not_printable[] = "\rasls";
	int is_true;

	is_true = ft_str_is_printable(num);
	printf("'%s'\tis printable? %d\n", num, is_true);

	is_true = ft_str_is_printable(str);
	printf("'%s'\tis printable? %d\n", str, is_true);

	is_true = ft_str_is_printable(upper);
	printf("'%s'\tis printable? %d\n", upper, is_true);

	is_true = ft_str_is_printable(empty);
	printf("'%s'\t\tis printable? %d\n", empty, is_true);

	is_true = ft_str_is_printable(not_printable);
	printf("'%s'\t\tis printable? %d\n", not_printable, is_true);
}