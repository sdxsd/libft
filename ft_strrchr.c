/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keizerrijk <keizerrijk@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:22:16 by keizerrijk        #+#    #+#             */
/*   Updated: 2021/10/13 10:22:17 by keizerrijk       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int					iterator;
	char				*lst_ptr;

	iterator = 0;
	while (s[iterator] != '\0')
	{
		if (s[iterator] == c)
			lst_ptr = (char *) s + iterator;
		++iterator;
	}
	if (s[iterator] == '\0' && c == '\0')
	{
		lst_ptr = (char *) s + iterator;
		return (lst_ptr);
	}
	else
		return (lst_ptr);
}
