char	*ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	char	tmp;
	while (str[len])
		len++;
	while (i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i++;
	}
	return (str);
}

/*char	*ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char	tmp;
	while (str[i])
		i++;
	while (j < (i / 2))
	{
		tmp = str[i];
		str[i] = str[(j - 1) - i];
		str[j - 1 - i] = tmp;
		i++;
	}
	return (str);
}*/

