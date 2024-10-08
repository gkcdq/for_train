#include <unistd.h>

void	xu(char *s)
{
	int i = 0;
	while(s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = 'a' + 'z' - s[i];
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = 'A' + 'Z' - s[i];
		write(1, &s[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		xu(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
