/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 15:10:58 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/10/28 15:20:41 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*start;

	if (!lst || !f || !del)
		return (NULL);
	ptr = ft_lstnew((*f)(lst -> content));
	start = ptr;
	while (lst -> next != NULL)
	{
		ptr -> next = ft_lstnew((*f)(lst -> content));
		lst = lst -> next;
	}
	return (ptr);
}
