#include "libft.h"

/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	if (dst == NULL && src == NULL)
		return (dst);
	tmp = ft_calloc(len, 1);
	ft_memcpy(tmp, src, len);
	ft_bzero(dst, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_c;
	const char	*src_c;

	dst_c = dst + (len - 1);
	src_c = src + (len - 1);
	if (dst > src)
	{
		while (len > 0)
		{
			*dst_c = *src_c;
			dst_c--;
			src_c--;
			len--;
		}
		dst_c[ft_strlen(dst_c)] = '\0';
		return ((void *)dst_c);
	}
	else
	{
		ft_memcpy(dst, src, len);
		return (dst);
	}
}
