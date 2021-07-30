int	ft_iterative_power(int nb, int power)
{	
	int	nf;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nf = 1;
	while (power > 0)
	{
		nf = nf * nb;
		power--;
	}
	return (nf);
}
