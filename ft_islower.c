#include "libft.h"

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (TRUE);
	else
		return (FALSE);
}
