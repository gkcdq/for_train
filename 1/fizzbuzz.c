#include <unistd.h>
#include <stdio.h>

void	wr(int n)
{
	char	s[10] = "0123456789";

	if (n > 9)
		wr(n / 10);
	write(1, &s[n % 10], 1);
}

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			wr(i);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}
