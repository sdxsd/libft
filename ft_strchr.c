/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 10:23:03 by keizerrijk    #+#    #+#                 */
/*   Updated: 2021/10/20 16:30:04 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		iterator;
	char	*loc;

	if (!s)
		return (NULL);
	iterator = 0;
	while (s[iterator] != c && s[iterator] != '\0')
		++iterator;
	if (s[iterator] == c)
		return (loc = (char *) s + iterator);
	else
		return (NULL);
}
