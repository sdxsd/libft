#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*strchr(const char *s, int c)
{
	int	iterator;

	iterator = 0;
	while (s[iterator] != c)
		++iterator;
}

int	ft_strlen(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
		++iterator;
	return (iterator);
}
