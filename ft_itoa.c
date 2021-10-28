/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 10:24:22 by keizerrijk    #+#    #+#                 */
/*   Updated: 2021/10/28 13:35:10 by wmaguire      ########   odam.nl         */
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

static int	ft_numlen(int n)
{
	int	dc;

	if (ft_isneg(n))
		n = -n;
	dc = 0;
	while (n > 10)
	{
		n /= 10;
		dc++;
	}
	return (dc);
}

static void	ft_detnum(char *str, int n, int nstatus)
{
	int	iterator;
	int	numlen;

	numlen = ft_numlen(n);
	iterator = 0;
	if (nstatus)
	{
		ft_memset(&str[iterator], '-', 1);
		iterator++;
		n = -n;
	}
	while (n > 10)
	{
		ft_memset(&str[iterator], (n % 10) + '0', 1);
		n /= 10;
		++iterator;
	}
	ft_memset(&str[iterator], (n % 10) + '0', 1);
	ft_revstr(&str[0 + nstatus], ft_strlen(str) - nstatus);
	ft_memset(&str[iterator + 1], '\0', 1);
	return ;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		iterator;

	str = malloc(ft_numlen(n) + ft_isneg(n));
	if (!str)
		return (NULL);
	iterator = 0;
	ft_detnum(str, n, ft_isneg(n));
	return (str);
}


int	main(void)
{
	ft_putstr(ft_itoa(-1234));
	ft_putstr("\n");
	ft_putstr(ft_itoa(156));
	ft_putstr("\n");
	ft_putstr(ft_itoa(-0));
	ft_putstr("\n");
	return (0);
}

