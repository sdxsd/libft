/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 10:22:16 by keizerrijk    #+#    #+#                 */
/*   Updated: 2021/10/13 12:38:55 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int					iterator;
	char				*lst_ptr;

	iterator = 0;
	if (ft_strlen(s) == 0)
		return ((char *)s);
	while (s[iterator] != '\0')
	{
		if (s[iterator] == c)
			lst_ptr = (char *) s + iterator;
		iterator++;
	}
	if (s[iterator] == '\0' && c == '\0')
	{
		lst_ptr = (char *) s + iterator;
		return (lst_ptr);
	}
	else
		return (lst_ptr);
}
