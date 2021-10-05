#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c) == TRUE)
		return (c + 32);
	else
		return (c);
}

int	ft_tolower(int c)
{
	if (ft_isupper(c) == TRUE)
		return (c - 32);
	else
		return (c);
}
