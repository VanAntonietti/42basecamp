#include <unistd.h>
void rush(int x, int y)
{
	int i = x - 2;
	int j = y - 2;

	ft_putchar('A');
	
		while (i > 0)
		{
			ft_putchar('B');
			i--;
		}
		
	ft_putchar('A');
	
	while (j > 0)
	{
		ft_putchar('B');
		while (i > 0)
		{
			ft_putchar(' ');
			i--;
		}
			
		ft_putchar('B');
		j--;
	}
	
}

/*rush (6,6)
A B B B B A
B         B      write (1, &a, nb)
B         B		 write (1, &a &b*(x-2); x)
B         B		 write (1, &a &b*4 & a; 6)
B         B
C B B B B C		 write (1, &c &b*4 &a; 6)

				 write (1, &b &d*x-2 )*/

