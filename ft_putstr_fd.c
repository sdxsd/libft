#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	iterator;

	iterator = 0;
	while (s[iterator] != 0)
	{
		ft_putchar_fd(s[iterator], fd);
		++iterator;
	}
}
