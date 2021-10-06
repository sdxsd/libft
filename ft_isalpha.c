#include "libft.h"

int	ft_isalpha(int c)
{
	if (ft_islower(c) == 1 || ft_isalpha(c) == 1)
		return (TRUE);
	else
		return (FALSE);
}
