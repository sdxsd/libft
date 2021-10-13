/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keizerrijk <keizerrijk@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:22:37 by keizerrijk        #+#    #+#             */
/*   Updated: 2021/10/13 10:22:43 by keizerrijk       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	iterator;

	iterator = 0;
	if (n == 0)
		return (0);
	while (s1[iterator] != '\0' && iterator < n - 1)
	{
		if (s1[iterator] != s2[iterator])
			return (((unsigned char)s1[iterator] - \
			(unsigned char)s2[iterator]));
		++iterator;
	}
	return ((unsigned char)s1[iterator] - (unsigned char)s2[iterator]);
}
