#include <string.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char *str = "Bonjour les aminches\n\b\rc  est fou\ntout\rce qu on peut faire avec\r\r\nprint_memory\n\n\r\blol\rlol\r \b";

	ft_print_memory(str, strlen(str));
	return (0);
}
