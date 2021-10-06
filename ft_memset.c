#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	char			*ptr;

	ptr = b;
	ch = c;
	while (len != 0)
	{
		*ptr = ch;
		ptr++;
		--len;
	}
	return (b);
}
