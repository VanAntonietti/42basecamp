int	ft_atoi(char *str)
{	
	int	i;
	int	minus;
	int	dest;

	i = 0;
	while (str[i] <= 32)
	{
		i++;
	}
	minus = 1;
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			minus = minus * -1;
		i++;
	}
	dest = 0;
	while ((48 <= str[i]) && (str[i] <= 57))
	{
		dest = dest * 10;
		dest = dest + (str[i] - 48);
		i++;
	}
	return (dest * minus);
}
