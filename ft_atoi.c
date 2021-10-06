#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '+' || c == '\t' || c == '\n' \
	|| c == '\v' || c == '\f' || c == '\r')
		return (TRUE);
	else
		return (FALSE);
}

int	ft_atoi(char *str)
{
	int	iterator;
	int	nbr;
	int	minus;

	nbr = 0;
	iterator = 0;
	while (ft_isspace(str[iterator]) == 1)
		iterator++;
	while (str[iterator] == '-' || str[iterator] == '+')
	{
		if (str[iterator] == '-' && iterator <= 2)
			minus = TRUE;
		if (str[iterator] > 2)
			return (nbr);
		++iterator;
	}
	while (str[iterator] >= '0' && str[iterator] <= '9')
	{
		nbr *= 10;
		nbr += (int)str[iterator] - '0';
		iterator++;
	}
	if (minus == TRUE)
		nbr = nbr - (nbr * 2);
	return (nbr);
}
