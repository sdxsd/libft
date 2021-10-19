/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaguire <wmaguire@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:22:16 by keizerrijk        #+#    #+#             */
/*   Updated: 2021/10/19 10:52:54 by wmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	iterator;
	char	*ptr;

	iterator = 0;
	while (c > 256)
		c -= 256;
	while (s[iterator] && iterator < ft_strlen(s))
	{
		if (s[iterator] == c)
			ptr = (char *)&s[iterator];
		++iterator;
	}
	if (s[iterator] == '\0' && c == '\0')
		return (ptr = (char *)&s[iterator]);
	return (ptr);
}

/*
int main()
{
	char *src = malloc(10);
	ft_strncpy(src, "123456789", 10);
	printf("%s", ft_strrchr(src, 'a'));
	return (0);
}
*/