#include <unistd.h>

void	rrr(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char	asc[127] = {0};

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (asc[s1[i]] == 0)
			{
				write(1, &s1[i], 1);
				asc[s1[i]] = 1;
				j++;
			}
			else
				j++;
		}
		i++;
	}
	j = 0;
	while (s2[j])
	{
		i = 0;
		while (s1[i])
		{
			if (asc[s2[j]] == 0)
			{
				write(1, &s2[j], 1);
				asc[s2[j]] = 1;
				i++;
			}
			else
				i++;
		}
		j++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		rrr(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
