#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i = 0;
	while(s[i])
		i++;
	return i;
}

char	*ft_strdup(char *src)
{
	int	len = ft_strlen(src);
	int i = 0;
	char	*dest = malloc(sizeof(char) * (len + 1));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
