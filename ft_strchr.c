/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaguire <wmaguire@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:23:03 by keizerrijk        #+#    #+#             */
/*   Updated: 2021/10/26 15:00:21 by wmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		iterator;
	char	*loc;

	iterator = 0;
	while (s[iterator] != c && s[iterator] != '\0')
		++iterator;
	if (s[iterator] == c)
		return (loc = (char *) s + iterator);
	else
		return (NULL);
}
