/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 10:24:22 by keizerrijk    #+#    #+#                 */
/*   Updated: 2021/10/18 17:59:55 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isneg(int n)
{
	if (n < 0)
		return (TRUE);
	else
		return (FALSE);
}

static void	ft_revstr(char *str, int size)
{
	int		inc;
	int		dec;
	char	holder;

	inc = 0;
	dec = size - 1;
	while (inc <= size / 2)
	{
		holder = str[inc];
		str[inc] = str[dec];
		str[dec] = holder;
		--dec;
		++inc;
	}
}

static int	ft_numlen(int n)
{
	int	dc;

	dc = 0;
	while (n > 10)
	{
		n /= 10;
		dc++;
	}
	return (dc);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		iterator;
	int		neg;

	str = malloc(ft_numlen(n));
	if (!str)
		return (NULL);
	iterator = 0;
	if (ft_isneg(n))
	{
		ft_memset(&str[iterator], '-', 1);
		n = -n;
		iterator++;
		neg = TRUE;
	}
	while (n > 10)
	{
		ft_memset(&str[iterator], (n % 10) + '0', 1);
		n /= 10;
		++iterator;
	}
	if (n < 10)
		ft_memset(&str[iterator], n + '0', 1);
	if (neg == TRUE)
		ft_revstr(&str[1], ft_strlen(str) - 1);
	else
		ft_revstr(&str[0], ft_strlen(str));
	ft_memset(&str[++iterator], '\0', 1);
	return (str);
}

/*
int	main(void)
{
	ft_putstr(ft_itoa(2000));
	return (0);
}
*/
