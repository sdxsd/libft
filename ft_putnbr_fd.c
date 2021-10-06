#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

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

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, &n, sizeof(int));
}
