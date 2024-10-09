#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char	asc[127] = {0};

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if ((s1[i] == s2[j]))
			{
				if (asc[s1[i]] == 0)
				{
					write(1, &s1[i], 1);
					asc[s1[i]] = 1;
				}
				j++;
			}
			else 
				j++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	write(1, "\n", 1);
}
