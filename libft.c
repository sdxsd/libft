#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

// Writes a single char to the file descriptor referred to by fd.
void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd)
{
    int iterator;

    iterator = 0;
    while (s[iterator] != 0)
    {
        ft_putchar_fd(s[iterator], fd);
        ++iterator;
    }
}

void ft_putendl_fd(char *s, int fd)
{
    int iterator;

    iterator = 0;
    while (s[iterator] != 0)
    {
        ft_putchar_fd(s[iterator], fd);
        ++iterator;
    }
    ++iterator;
    ft_putchar_fd('\n', fd);
}

void ft_putnbr_fd(int n, int fd)
{
    write(fd, &n, sizeof(int));
}

char *strchr(const char *s, int c)
{
    int iterator;

    iterator = 0;
    while (s[iterator] != c)
        ++iterator;
}

int ft_strlen(char *str)
{
    int iterator;

    iterator = 0;
    while (str[iterator] != '\0')
        ++iterator;
    return (iterator);
}

int ft_islower(int c)
{
    if (c >= 141 && <= 172)
        return (1);
    else
        return (0)
}

int ft_isupper(int c)
{
    if (c >= 101 && <= 132)
        return (1);
    else
        return (0)
}

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}

int ft_isalpha(int c)
{
    if (ft_islower(c) == 1 || ft_isalpha == 1)
        return (1);
    else
        return (0);
}

int ft_isalnum(int c)
{
    if (isalpha(c) == 1 || isdigit(c) == 1)
        return (1);
    else
        return (0);
}

int ft_isascii(int c)
{
    if (c >= 0 && c <= 177)
        return (1);
    else
        return (0);
}
