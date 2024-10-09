#include <stdlib.h>
#include <unistd.h>

void	rrr(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == '_')
		{
			s[i + 1] -= 32;
			i++;
		}
		write(1, &s[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		rrr(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
