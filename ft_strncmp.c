#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	iterator;

	iterator = 0;
	if (n == 0)
		return (0);
	while (s1[iterator] != '\0' && iterator < n - 1)
	{
		if (s1[iterator] != s2[iterator])
			return (((unsigned char)s1[iterator] - \
			(unsigned char)s2[iterator]));
		++iterator;
	}
	return ((unsigned char)s1[iterator] - (unsigned char)s2[iterator]);
}
