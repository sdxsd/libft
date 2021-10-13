/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keizerrijk <keizerrijk@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:22:58 by keizerrijk        #+#    #+#             */
/*   Updated: 2021/10/13 10:22:58 by keizerrijk       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dupe_str;

	dupe_str = malloc(ft_strlen((char *)s1));
	if (!dupe_str)
		return (NULL);
	else
	{
		ft_strncpy(dupe_str, (char *)s1, ft_strlen((char *)s1));
		dupe_str[ft_strlen((char *)s1)] = '\0';
		return (dupe_str);
	}
}
