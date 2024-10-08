int	ft_atoi(const char *s)
{
	int sign = 1;
	int i = 0;
	int n = 0;

	while (s[i] <= 32)
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= 0 && s[i] <= 9)
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (sign * n);
			
}

#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	printf("\tvrai atoi : %d\n", atoi(av[1]));
	printf("\tle mien : %d\n", ft_atoi(av[1]));
	return 0;
}
