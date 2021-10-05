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

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			iterator;
	const char		*str_ptr;

	iterator = 0;
	str_ptr = s;
	while (iterator != n)
	{
		if (str_ptr[iterator] == c)
			return ((void*) &str_ptr[iterator]);
		++iterator;
	}
	return (NULL);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char		*str_1;
	const char		*str_2;
	size_t			iterator;

	str_1 = s1;
	str_2 = s2;
	iterator = 0;
	while (iterator != n)
	{
		if (str_1[iterator] != str_2[iterator])
			return ((str_1[iterator] - str_2[iterator]));
		++iterator;
	}
	return (0);
}
