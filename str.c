#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	iterator;

	iterator = 0;
	while (s[iterator] != c && s[iterator] != '\0')
		++iterator;
	if (s[iterator] == c)
		return (&s[iterator]);
	else
		return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	int		iterator;
	char	*lst_ptr;

	iterator = 0;
	while (s[iterator] != '\0')
	{
		if (s[iterator] == c)
			lst_ptr = s[iterator];
	}
	if (s[iterator] == '\0' && c == '\0')
		return (&s[iterator]);
	else
		return (lst_ptr);
}

int	ft_strlen(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
		++iterator;
	return (iterator);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	iterator;

	iterator = 0;
	while (iterator < n && src[iterator] != '\0')
	{
		dest[iterator] = src[iterator];
		++iterator;
	}
	while (iterator < n)
	{
		dest[iterator] = '\0';
		iterator++;
	}
	return (dest);
}
