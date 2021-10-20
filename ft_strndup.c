/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaguire <wmaguire@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:37:53 by wmaguire          #+#    #+#             */
/*   Updated: 2021/10/19 16:45:59 by wmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char	*dupe_str;

	dupe_str = malloc(len + 1);
	if (!dupe_str)
		return (NULL);
	else
	{
		ft_memcpy(dupe_str, s1, len);
		dupe_str[len] = '\0';
		return (dupe_str);
	}
}
