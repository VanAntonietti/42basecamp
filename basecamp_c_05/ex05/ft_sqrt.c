int	ft_sqrt(int nb)
{	
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (nb <= 0)
		return (0);
	while (y < nb && x <= 46341)
	{	
		x++;
		y = x * x;
	}
	if (y == nb)
		return (x);
	return (0);
}
