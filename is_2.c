#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
		return (1);
	else
		return (0);
}

int	ft_isprint(int c)
{
	if (c >= 40 && c <= 176)
		return (1);
	else
		return (0);
}
