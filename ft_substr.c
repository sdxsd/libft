/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaguire <wmaguire@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:03:35 by wmaguire          #+#    #+#             */
/*   Updated: 2021/10/19 12:23:27 by wmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (substr = ft_calloc(1, 1));
	ptr = (char *)&s[start];
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strncpy(substr, ptr, len);
	substr[len] = '\0';
	return (substr);
}
