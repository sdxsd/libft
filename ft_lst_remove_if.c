/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CODAM C FILE                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 1970/01/01 00:00:00 by wmaguire      #+#    #+#                 */
/*   Updated: 1970/01/01 00:00:00 by wmaguire     ########   codam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
THIS FILE IS LICENSED UNDER THE GNU GPLv3
Copyright (C) 2022  Will Maguire

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>

The definition of Free Software is as follows:
				- The freedom to run the program, for any purpose.
				- The freedom to study how the program works, and adapt it to your needs.
				- The freedom to redistribute copies so you can help your neighbor.
				- The freedom to improve the program, and release
				your improvements to the public, so that the whole community benefits.

A program is free software if users have all of these freedoms.
*/

#include "libft.h"
#include <stdlib.h>

// NOTE: Removes element of the list if the data *d matches the reference *dr.
// Contains memory leaks as content is not freed.
void	ft_lst_rm_if(t_list **l, void *dr, int (*cmp)(void *d, void *dr))
{
	t_list	*tmp;
	t_list	*prev;
	t_list	*curr;

	curr = *l;
	prev = NULL;
	tmp = NULL;
	while (curr)
	{
		if (!cmp(curr->content, dr))
		{
			tmp = curr->next;
			free(curr);
			if (!prev)
				*l = tmp;
			if (prev)
				prev->next = tmp;
			curr = tmp;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}

/*
int tstcmpare(void *d, void *dr)
{
	char	*d_str;
	char	*dr_str;

	d_str = d;
	dr_str = dr;
	return (ft_strncmp(d_str, dr_str, ft_strlen(dr_str)));
}
*/

/*
int main()
{
	t_list *lst;
	char	*data;
	void	*dr;

	dr = "Hello!";
	lst = ft_lstnew("Hello!");
	ft_lstadd_back(&lst, ft_lstnew("Goodbye!"));
	ft_lstadd_back(&lst, ft_lstnew("Hello!"));
	ft_lstadd_back(&lst, ft_lstnew("Goodbye!"));
	ft_lstadd_back(&lst, ft_lstnew("Goodbye!"));
	ft_lstadd_back(&lst, ft_lstnew("Goodbye!"));
	ft_lstadd_back(&lst, ft_lstnew("Hello!"));
	ft_lstadd_back(&lst, ft_lstnew("Hello!"));
	ft_lstadd_back(&lst, ft_lstnew("Hello!"));
	ft_lstadd_back(&lst, ft_lstnew("Hello!"));
	ft_lstadd_back(&lst, ft_lstnew("Goodbye!"));
	ft_lstadd_back(&lst, ft_lstnew("Goodbye!"));
	ft_lst_rm_if(&lst, dr, tstcmpare);
	while (lst)
	{
		data = lst->content;
		printf("%s\n", data);
		lst = lst->next;
	}
}
*/
