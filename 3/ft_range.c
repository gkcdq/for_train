#include <stdlib.h>

void	sort_in_tab(int *tab, int size)
{
	int i = 0;
	int	tmp = 0;

	while (i < (size - 1))
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

int     *ft_range(int start, int end)
{
	int i = 0;
	int	*rrange;
	int	size;
	if (start > end)
	{
		size = start - end + 1;
		rrange = malloc(sizeof(int) * (size));
	}
	else
	{
		size = end - start + 1;
		rrange = malloc(sizeof(int) * (size));
	}
	while (start != end)
	{
		rrange[i++] = end;
		end -= (start > end) ? -1 : 1;
	}
	rrange[i] = end;
	sort_in_tab(rrange, size);
	return (rrange);
}
/*
int	*ft_range(int start, int end)
{
	int i = 0;
	int *range;
	int size = 0;

	if (start > end)
	{
		size = start - end + 1;
		range = malloc(sizeof(int) * size);
	}
	else
	{
		size = end - start + 1;
		range = malloc(sizeof(int) * size);
	}
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = start;
	return range;
}*/
