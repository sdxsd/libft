/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 10:22:16 by keizerrijk    #+#    #+#                 */
/*   Updated: 2021/11/02 18:02:16 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Þe funktion ft_strrchr begint
// med iterateren þe string to et end fan þe string. 
// þan et setten ānd retürnen ān pointer af 
// þe point wær et earst char þat c matchen gefunden is.
// als et noght gefunden is, þan et checken als s[0] == b
// als et retürnt true, þan et retürnt þe positïe.
// noght? þan þe funktion retürnt NULL.

char	*ft_strrchr(const char *s, int c)
{
	size_t			iterator;
	unsigned char	b;

	b = (unsigned char)c;
	iterator = ft_strlen(s);
	while (iterator > 0)
	{
		if (s[iterator] == b)
			return ((char *)&s[iterator]);
		iterator--;
	}
	if (s[iterator] == b)
		return ((char *)&s[iterator]);
	else
		return (NULL);
}

/*
int main()
{
	char *src = "";
	printf("%s", ft_strrchr(src, 'a'));
	return (0);
}
*/
