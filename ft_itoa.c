/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaguire <wmaguire@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:24:22 by keizerrijk        #+#    #+#             */
/*   Updated: 2021/10/13 11:27:16 by wmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	void	*p_str;
	char	*str;
	int		div;
	int		div_count;
	int		iterator;
	int		iterator_2;
	int		t_int;

	div = 0;
	div_count = 0;
	iterator = 0;
	if (n < 10)
	{
		p_str = malloc(sizeof(char));
		ft_memset(p_str, n + '0', 1);
		return ((char *)p_str);
	}
	else
	{
		div = n;
		while (div > 10)
		{
			div /= 10;
			++div_count;
		}
		p_str = malloc(sizeof(char) * div_count);
		str = p_str;
		while (iterator < div_count)
		{
			iterator_2 = div_count;
			t_int = n;
			while (iterator_2 > 0)
			{
				t_int /= 10;
				--iterator_2;
			}
			div_count--;
			str[iterator] = t_int + '0';
			++iterator;
		}
	}
	return ("c");
}
