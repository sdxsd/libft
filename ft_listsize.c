/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_listsize.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 19:45:45 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/10/16 11:59:56 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (!lst)
		return (0);
	if (lst -> next == NULL)
		return (1);
	else
	{
		size++;
		return (size + ft_lstsize(lst -> next));
	}
}
