#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*f_ptr;
	size_t	c_count;
	size_t	iterator;
	size_t	iterator_2;
	size_t	needle_iter;

	c_count = ft_strlen((char *) needle);
	needle_iter = 0;
	iterator = 0;
	if (c_count == 0)
		return ((char *) haystack);
	while (haystack[iterator] != '0' && iterator < len)
	{
		iterator_2 = iterator;
		if (haystack[iterator] == needle[0])
		{
			c_count--;
			++iterator_2;
			f_ptr = (char *)&haystack[iterator];
			while (haystack[iterator_2] == needle[needle_iter])
			{
				--c_count;
				++iterator_2;
				++needle_iter;
			}
			if (c_count == 0)
				return (f_ptr);
			else
			{
				iterator_2 = iterator;
				needle_iter = 0;
			}
		}
		++iterator;
	}
	return (NULL);
}
