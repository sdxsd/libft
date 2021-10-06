#include "libft.h"

int	ft_isupper(int c)
{
	if (c >= 101 && c <= 132)
		return (TRUE);
	else
		return (FALSE);
}
