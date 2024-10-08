#include <unistd.h>
#include <stdlib.h>

void	qwoieru(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i + 1] >= 'A' && s[i] <= 'Z')
			write(1, "_", 1);
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		write(1, &s[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
	{
		write(1, "\n", 1);
		return 0;
	}
	qwoieru(av[1]);
	write(1, "\n", 1);
	return 0;
}
