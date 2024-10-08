#include<stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int i = 0;
		int k = 0;
		int x = i;

		if (av[2][1] != '\0' || av[3][1] != '\0')
		{
			write(1, "\n", 1);
			exit(0);
		}
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
