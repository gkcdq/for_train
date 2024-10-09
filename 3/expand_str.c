#include <unistd.h>

void	ty(char *s)
{
	int i = 0;
	int space = 0;

	while (s[i] <= 32)
		i++;
	while (s[i])
	{
		if (s[i] <= 32)
		{
			space = 1;
			i++;
		}
		else if (s[i])
		{
			if (space)
				write(1, "   ", 3);
			write(1, &s[i], 1);
			space = 0;
			i++;
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (av[1][0] == '\0')
		{
			write(1, "\n", 1);
			return 0;
		}
		else
			ty(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
