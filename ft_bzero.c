#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	iterator;

	ptr = s;
	iterator = 0;
	while (iterator < n)
	{
		ptr[iterator] = 0;
		++iterator;
	}
}
