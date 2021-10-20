/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 10:25:01 by keizerrijk    #+#    #+#                 */
/*   Updated: 2021/10/20 16:48:12 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	iterator;

	if (!s)
		return ;
	ptr = s;
	iterator = 0;
	while (iterator < n)
	{
		ptr[iterator] = 0;
		++iterator;
	}
}
