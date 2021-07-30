
#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char num[] = "0123456789";
	char word[] = "perturbator";
	char str[] = "venger";
	char alpha[] = "0meg4";
	char escape[] = "\rtest08ing\b";
	int is_true;

	is_true = ft_str_is_alpha(num);
	printf("num is alphabetic? %d\n", is_true);

	is_true = ft_str_is_alpha(word);
	printf("word is alphabetic? %d\n", is_true);

	is_true = ft_str_is_alpha(str);
	printf("str is alphabetic? %d\n", is_true);

	is_true = ft_str_is_alpha(alpha);
	printf("alpha is alphabetic? %d\n", is_true);

	is_true = ft_str_is_alpha(escape);
	printf("escape is alphabetic? %d\n", is_true);
}