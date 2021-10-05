#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	char			*ptr;

	ptr = &b;
	ch = c;
	while (len != 0)
	{
		*ptr = ch;
		ptr++;
		--len;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = &s;
	while (n != 0)
	{
		*ptr = 0;
		n--;
	}
	return (s);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		iterator;
	int		*ptr;
	int		*src_ptr;
	void	*begin_ptr;

	ptr = &dst;
	src_ptr = &src;
	begin_ptr = &dst;
	while (iterator != n)
	{
		*ptr = *src_ptr;
		++ptr;
		++src_ptr;
		++iterator;
	}
}
