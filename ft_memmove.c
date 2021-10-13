/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keizerrijk <keizerrijk@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:24:04 by keizerrijk        #+#    #+#             */
/*   Updated: 2021/10/13 10:29:28 by keizerrijk       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_c;
	const char	*src_c;

	if (dst == NULL && src == NULL)
		return (dst);
	dst_c = dst;
	src_c = src;
	if (dst > src)
	{
		dst_c += len;
		src_c += len;
		while (len-- > 0)
			*--dst_c = *--src_c;
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
