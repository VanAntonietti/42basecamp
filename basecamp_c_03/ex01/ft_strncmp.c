int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;
	unsigned char	su;
	unsigned char	st;

	i = 0;
	while (n > 0 && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		su = s1[i];
		st = s2[i];
		return (su - st);
	}
}
