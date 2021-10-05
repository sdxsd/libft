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

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n != 0)
	{
		ptr[n] = 0;
		n--;
	}
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			iterator;
	const char		*src_ptr;
	char			*dst_ptr;

	iterator = 0;
	src_ptr = src;
	dst_ptr = dst;
	while (iterator != n)
	{
		dst_ptr[iterator] = src_ptr[iterator];
		++iterator;
	}
	return (dst);
}
