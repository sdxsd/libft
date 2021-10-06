#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			iterator;
	char		*lst_ptr;

	iterator = 0;
	while (s[iterator] != '\0')
	{
		if (s[iterator] == c)
			lst_ptr = (char *) s + iterator;
		++iterator;
	}
	if (s[iterator] == '\0' && c == '\0')
		return (lst_ptr = (char *) s + iterator);
	else
		return (lst_ptr);
}
