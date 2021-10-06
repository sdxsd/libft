#include "libft.h"

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (TRUE);
	else
		return (FALSE);
}
