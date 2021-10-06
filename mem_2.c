#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	tmp = malloc(ft_strlen(src));
	ft_memcpy(tmp, src, strlen(src));
	ft_bzero(dst, ft_strlen(src));
	ft_memcpy(dst, tmp, strlen(tmp));
	free(tmp);
	return (dst);
}
