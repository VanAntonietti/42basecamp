unsigned int	ft_strlcat(char *dest, char	*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	l = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	while (dest[l] && l < size)
		l++;
	i = l;
	while (src[l - i] && l + 1 < size)
	{
		dest[l] = src[l - i];
		l++;
	}
	if (i < size)
		dest[l] = '\0';
	return (i + j);
}
