int	max(int *tab, unisgned int len)
{
	int i = 0;
	int result = tab[i];
	if (len == 0)
		return 0;
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return result;
}
