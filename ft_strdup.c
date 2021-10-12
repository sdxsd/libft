#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dupe_str;

	dupe_str = malloc(ft_strlen((char *)s1));
	if (!dupe_str)
		return (NULL);
	else
	{
		ft_strncpy(dupe_str, (char *)s1, ft_strlen((char *)s1));
		dupe_str[ft_strlen((char *)s1)] = '\0';
		return (dupe_str);
	}
}
