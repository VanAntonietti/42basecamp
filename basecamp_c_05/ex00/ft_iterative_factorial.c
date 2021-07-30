int	ft_iterative_factorial(int nb)
{
	int	nf;

	if (nb < 0)
	{	
		return (0);
	}	
	if (nb == 0)
	{
		return (1);
	}	
	nf = 1;
	while (nb >= 1 )
	{	
		nf = nf * nb;
		--nb;
	}
	return (nf);
}
