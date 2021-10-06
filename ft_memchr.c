#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			iterator;
	const char		*str_ptr;

	iterator = 0;
	str_ptr = s;
	while (iterator != n)
	{
		if (str_ptr[iterator] == c)
			return ((void *) &str_ptr[iterator]);
		++iterator;
	}
	return (NULL);
}
