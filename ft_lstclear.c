/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/16 14:43:55 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/10/16 14:50:43 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	ptr = *lst;
	if (ptr -> next != NULL)
		ft_lstclear(&ptr -> next, del);
	else
	{
		(*del)(ptr -> content);
		free(*lst);
		*lst = NULL;
	}
}
