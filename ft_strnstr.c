#include "libft.h"

char	*ft_strnstr(const char *hs, const char *ndl, size_t len)
{
	size_t	c_count;
	size_t	iterator;

	c_count = ft_strlen((char *) ndl);
	iterator = 0;
	if (c_count == 0)
		return ((char *) hs);
	while (hs[iterator] != '0' && iterator < len)
	{
		if (hs[iterator] == ndl[0])
		{
			if (ft_strncmp(&hs[iterator], ndl, ft_strlen((char *)ndl)) == 0)
			{
				return ((char *)&hs[iterator]);
			}
		}
		++iterator;
	}
	return (0);
}
