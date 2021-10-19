/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaguire <wmaguire@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:09:06 by wmaguire          #+#    #+#             */
/*   Updated: 2021/10/19 09:53:27 by wmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	int	iterator;

	if (str == NULL)
		return ;
	iterator = 0;
	while (str[iterator] != '\0')
		++iterator;
	write(1, str, iterator);
}
