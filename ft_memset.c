/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaguire <wmaguire@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:24:00 by keizerrijk        #+#    #+#             */
/*   Updated: 2021/10/13 11:27:23 by wmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	char			*ptr;

	ptr = b;
	ch = c;
	while (len != 0)
	{
		*ptr = ch;
		ptr++;
		--len;
	}
	return (b);
}
