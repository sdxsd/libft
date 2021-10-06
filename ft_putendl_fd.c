#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	iterator;

	iterator = 0;
	while (s[iterator] != 0)
	{
		ft_putchar_fd(s[iterator], fd);
		++iterator;
	}
	++iterator;
	ft_putchar_fd('\n', fd);
}
