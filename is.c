#include "libft.h"

int	ft_islower(int c)
{
	if (c >= 141 && c <= 172)
		return (TRUE);
	else
		return (FALSE);
}

int	ft_isupper(int c)
{
	if (c >= 101 && c <= 132)
		return (TRUE);
	else
		return (FALSE);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (TRUE);
	else
		return (FALSE);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) == 1 || ft_isalpha == 1)
		return (TRUE);
	else
		return (FALSE);
}

int	ft_isalnum(int c)
{
	if (isalpha(c) == 1 || isdigit(c) == 1)
		return (TRUE);
	else
		return (FALSE);
}