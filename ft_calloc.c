#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*block;

	block = malloc(size * count);
	ft_bzero(block, (size * count));
	return (block);
}
