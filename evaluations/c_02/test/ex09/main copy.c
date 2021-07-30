#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str1[] = "fight for freedom lets unite to carry 0n";
	char str2[] = "THEN WE CAN RISE UP THE UNIVERSE T0 GIVE";

	printf("str1: %s\n", str1);
	ft_strcapitalize(str1);
	printf("str1_c: %s\n", str1);
	printf("str2: %s\n", str2);
	ft_strcapitalize(str2);
	printf("str2_c: %s\n", str2);

	return (0);
}
