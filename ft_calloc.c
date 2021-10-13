/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keizerrijk <keizerrijk@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:24:57 by keizerrijk        #+#    #+#             */
/*   Updated: 2021/10/13 10:24:58 by keizerrijk       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*block;

	block = malloc(size * count);
	if (!block)
		return (NULL);
	ft_bzero(block, (size * count));
	return (block);
}
