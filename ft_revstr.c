/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_revstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/27 18:40:04 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/10/27 20:13:57 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_revstr(char *str, int size)
{
	int		iter_1;
	int		iter_2;
	char	*hold_str;

	iter_1 = 0;
	iter_2 = size - 1;
	hold_str = ft_strdup(str);
	while (iter_1 < size)
	{
		str[iter_1] = hold_str[iter_2];
		iter_1++;
		iter_2--;
	}
	free(hold_str);
}

/*
int main()
{
	char *str = ft_strdup("-4321");
	
	ft_revstr(&str[1], 4);
	ft_putstr(str);
}
*/