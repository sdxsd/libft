#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	iterator;

	iterator = 0;
	while ((s1[iterator] != '\0' || s2[iterator] != '\0') \
	&& iterator < n)
	{
		if (s1[iterator] != s2[iterator])
			return ((s1[iterator] - s2[iterator]));
		++iterator;
	}
	return (0);
}
