#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int n = 7;
	while(n >= 0)
	{
		if ((octet >> n) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		n--;
	}
}
