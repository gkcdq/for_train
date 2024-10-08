#include <unistd.h>

int	ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return i;
}

char	*rev_print(char	*s)
{
	int i = ft_strlen(s);
	while ((--i) > -1)
	{
		write(1, &s[i], 1);
	}
	write(1, "\n", 1);
	return (s);
}

int main(void)
{
  rev_print("Hello world");
//  write (1, "\n", 1);
//  rev_print("tnirp esreveR");
//  write (1, "\n", 1);
//  rev_print("");
//  write (1, "\n", 1);
}
