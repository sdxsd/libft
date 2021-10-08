#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	iterator;

	iterator = 0;
	while (((unsigned char) s1[iterator] != '\0' \
	&& (unsigned char) s2[iterator] != '\0') \
	&& iterator < n)
	{
		if (s1[iterator] != s2[iterator])
			return ((s1[iterator] - s2[iterator]));
		++iterator;
	}
	return ((0));
}
