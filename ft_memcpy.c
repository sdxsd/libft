#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			iterator;
	const char		*src_ptr;
	char			*dst_ptr;

	if (dst == NULL && src == NULL)
		return (dst);
	iterator = 0;
	src_ptr = src;
	dst_ptr = dst;
	while (iterator < n)
	{
		dst_ptr[iterator] = src_ptr[iterator];
		++iterator;
	}
	return (dst);
}
