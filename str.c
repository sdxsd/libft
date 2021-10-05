#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	iterator;

	iterator = 0;
	while (s[iterator] != c)
		++iterator;
}

int	ft_strlen(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
		++iterator;
	return (iterator);
}
