#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# define TRUE 1
# define FALSE 0

typedef size_t	t_size;

void	t_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_isascii(int c);
void	*ft_memset(void *b, int c, size_t len);
void	bzero(void *s, size_t n);
char	*strchr(const char *s, int c);
int		ft_strlen(char *str);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);

#endif
