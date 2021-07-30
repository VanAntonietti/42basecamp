#include <unistd.h>


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void rush(int x, int y)
{	
	if ( x > 1 || y > 1)
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
	
	ft_putchar('\n');
	
	while (j > 0)
	{
		int i = x - 2;
		ft_putchar('B');
		while (i > 0)
		{
			ft_putchar(' ');
			i--;
		}
			ft_putchar('B');
		j--;
		ft_putchar('\n');
	}
		
	ft_putchar('C');
		
		int m = x - 2;
		while (m > 0)
		{
			
			ft_putchar('B');
			m--;
		}
		
	ft_putchar('C');
	
	ft_putchar('\n');
	}

else {

int i = x; 
int j = y;

ft_putchar('A');
ft_putchar(i);
ft_putchar(j);

}
}

int main()
{
	rush(25,25);

	return 0;
}



{
	if (x > 0 && y > 0)
	{
		ft_putchar ('B')
	}
		int i = 0
		int j = y - 2

		while (j > 0)
	{
	
		while (i > 0)
		{
			ft_putchar(' ');
			i++;
		}
			ft_putchar('B');
		j++;
		ft_putchar('\n');
	}
	if (x > 0 && y > 1)
		{ft_putchar('B');
		ft_putchar('\n');
		}
}