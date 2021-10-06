#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		iterator;
	char	*loc;

	iterator = 0;
	while (s[iterator] != c && s[iterator] != '\0')
		++iterator;
	if (s[iterator] == c)
		return (loc = (char *) s + iterator);
	else
		return (NULL);
}
