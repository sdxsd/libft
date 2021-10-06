#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	iterator;

	iterator = 0;
	while (iterator < n && src[iterator] != '\0')
	{
		dest[iterator] = src[iterator];
		++iterator;
	}
	while (iterator < n)
	{
		dest[iterator] = '\0';
		iterator++;
	}
	return (dest);
}