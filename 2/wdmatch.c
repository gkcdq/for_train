#include <unistd.h>

void	aslkdjf(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i] == '\0')
	{
		i = 0;
		while (s1[i])
		{
			write(1, &s1[i], 1);
			i++;
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		aslkdjf(av[1], av[2]);
	}
	write(1, "\n", 1);
	return 0;
}
