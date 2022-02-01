/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_charchk.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 10:24:22 by keizerrijk    #+#    #+#                 */
/*   Updated: 2022/02/01 13:36:30 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charchk(int tc, char *dict)
{
	while (*dict++ != '\0')
		if (tc == *dict)
			return (1);
	return (0);
}
