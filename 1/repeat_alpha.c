#include <unistd.h>

void	d(char *s)
{
	int i = 0;
	int c = 0;

	while (s[i])
	{
	if (s[i] >= 'a' && s[i] <= 'z')
		c = (s[i] - 'a' + 1);
	else if (s[i] >= 'A' && s[i] <= 'z')
		c = (s[i] - 'A' + 1);
	else
		c = 1;
	while (c--)
	{
		write(1, &s[i], 1);
	}
	i++; }
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		d(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
