/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 10:25:06 by keizerrijk    #+#    #+#                 */
/*   Updated: 2021/10/20 16:51:27 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' \
	|| c == '\v' || c == '\f' || c == '\r' || c == '\b')
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
	if (str[iterator] == '-' || str[iterator] == '+')
	{
		if (str[iterator] == '-')
			minus = -1;
		while (str[iterator + 1] == '+' || str[iterator + 1] == '-')
			++iterator;
		++iterator;
	}
	while (str[iterator] >= '0' && str[iterator] <= '9')
	{
		nbr *= 10;
		nbr += (int)str[iterator] - '0';
		++iterator;
	}
	if (minus == -1)
		nbr = (nbr - (nbr * 2));
	return (nbr);
}
