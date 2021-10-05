#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				iterator;
	unsigned char	ch;

	ch = c;
	while (len != 0)
	{
		b = ch;
		b++;
		++iterator;
		--len;
	}
	return (&b);
}

void	bzero(void *s, size_t n)
{

}