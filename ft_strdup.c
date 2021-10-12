#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*dupe_str;

	dupe_str = malloc(ft_strlen((char *)s1) + 1);
	if (!dupe_str)
		return (NULL);
	else
	{
		ft_strncpy(dupe_str, (char *)s1, ft_strlen((char *)s1));
		return ((char *) dupe_str);
	}
}
