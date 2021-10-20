/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaguire <wmaguire@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:22:31 by wmaguire          #+#    #+#             */
/*   Updated: 2021/10/19 18:46:36 by wmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	ft_splitcount(const char *s, char c)
{
	int	sc;

	sc = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			sc++;
			while (*s == c)
			{
				s++;
				if (*s == '\0')
				{
					sc--;
					return (sc);
				}
			}
		}
		s++;
	}
	return (sc);
}

static int	ft_getnextword(const char *s, char c)
{
	int	iterator;

	iterator = 0;
	while (s[iterator] == c)
		++iterator;
	return (iterator);
}

static int	ft_getnextdelim(const char *s, char c)
{
	int	iterator;

	iterator = 0;
	while (s[iterator] != c)
		++iterator;
	return (iterator);
}

char	**ft_split(char const *s, char c)
{
	char	**s_array;
	int		iterator;
	int		iterator_2;
	int		next_delim;

	iterator = 0;
	iterator_2 = 0;
	if (!s)
		return (NULL);
	s_array = malloc(sizeof(char *) * (ft_splitcount(s, c) + 2));
	if (!s_array)
		return (NULL);
	while (iterator < ft_splitcount(s, c))
	{
		if (s[iterator_2] == c)
			iterator_2 += ft_getnextword(&s[iterator_2], c);
		next_delim = ft_getnextdelim(&s[iterator_2], c);
		s_array[iterator] = ft_strndup(&s[iterator_2], next_delim);
		iterator_2 += next_delim;
		++iterator;
	}
	return (s_array);
}

/*
int main()
{
	char	*s = "MacOS/Windows/GNU_LINUX/FreeBSD/OpenBSD/UNIX";
	char	c = '/';
	char	**s_array = ft_split(s, c);
	
	for (int i = 0; s_array[i] != NULL; i++)
		printf("%s\n", s_array[i]);
}
*/

/*
int main()
{
	char *s = "   split       this for   me  !       ";

	char **s_array = ft_split(s, ' ');
	for (int i = 0; s_array[i] != NULL; i++)
		printf("%s\n", s_array[i]);
}
*/