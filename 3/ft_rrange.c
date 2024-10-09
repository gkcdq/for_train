#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int size;
	int i = 0;
	int	*rrange;

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
		rrange[i++] = end;
		end -= (start > end) ? -1 : 1;
	}
	rrange[i] = end;
	return (rrange);
		
}
