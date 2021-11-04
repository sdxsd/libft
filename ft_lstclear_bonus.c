/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/16 14:43:55 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/10/28 14:58:51 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	while (*lst)
	{
		ptr = *lst;
		*lst = ptr -> next;
		(*del)(ptr -> content);
		free(ptr);
	}
}
