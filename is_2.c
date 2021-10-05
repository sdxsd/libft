#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
		return (TRUE);
	else
		return (FALSE);
}

int	ft_isprint(int c)
{
	if (c >= 40 && c <= 176)
		return (TRUE);
	else
		return (FALSE);
}
