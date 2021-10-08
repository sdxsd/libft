#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# define TRUE 1
# define FALSE 0

typedef size_t	t_size;

// FILE WRITING FUNCTIONS (file_f.c)
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// STRING FUNCTIONS (str.c)
char	*ft_strchr(const char *s, int c);
int		ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// TO FUNCTIONS (to.c)
int		ft_tolower(int c);
int		ft_toupper(int c);

// DETERMINATION FUNCTIONS (is.c / is_2.c)
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

// MEMORY FUNCTIONS (mem.c / mem_2.c)
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_calloc(size_t count, size_t size);

// ATOI (atoi.c)
int		ft_atoi(char *str);
int		ft_isspace(char c);

#endif
