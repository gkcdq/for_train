#include <unistd.h>


void	fw(char *s1)
{
	int i = 0;
	while (s1[i] <= 32 && s1[i])
		i++;		
	while (s1[i] > 32)
	{
		write(1, &s1[i], 1);
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		if(av[1][0] == '\0')
		{
			write (1, "\n", 1);
			return 0;
		}
		else
			fw(av[1]);
	}
	write (1, "\n", 1);
	return 0;

}
