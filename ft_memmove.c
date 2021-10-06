#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	tmp = malloc(len);
	ft_memcpy(tmp, src, len);
	ft_bzero(dst, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
