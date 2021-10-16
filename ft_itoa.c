/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 10:24:22 by keizerrijk    #+#    #+#                 */
/*   Updated: 2021/10/14 18:54:10 by wmaguire      ########   odam.nl         */
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
	int	div_count;

	div_count = 0;
	if (ft_isneg(n))
		div_count++;
	while (n > 10)
	{
		n /= 10;
		++div_count;
	}
	return (div_count);
}

static char	*ft_below_ten(int n)
{
	void	*str;

	if (ft_isneg(n))
	{	
		str = malloc(sizeof(char) * 3);
		if (!str)
			return (NULL);
		ft_memset(str, '-', 1);
		str++;
	}
	else
		str = malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	ft_memset(str, n + '0', 1);
	str++;
	ft_memset(str, '\0', 1);
	return ((char *)str);
}

static char	div_n(int n)
{
	while (n > 10)
	{
		n /= 10;
	}
	return (n + '0');
}

char	*ft_itoa(int n)
{
	int		iterator;
	int		div_count;
	char	str[12];
	char	*str_ptr;

	if (n == -2147483648)
		return ("-2147483648");
	div_count = ft_numlen(n);
	iterator = 0;
	str_ptr = &str[0];
	if (n < 10)
		return (ft_below_ten(n));
	else
	{
		if (ft_isneg(n))
		{
			str[iterator] = '-';
			iterator++;
		}
		while (iterator < div_count)
		{
			str[iterator] = div_n(n);
			n /= 10;
			iterator++;
		}
		str[iterator] = '\0';
	}
	return (str_ptr);
}
