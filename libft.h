/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaguire <wmaguire@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:21:34 by keizerrijk        #+#    #+#             */
/*   Updated: 2021/10/19 12:04:33 by wmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# define TRUE 1
# define FALSE 0

typedef size_t	t_size;

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}	t_list;

// LINKED LIST FUNCTIONS 
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));

// FILE WRITING FUNCTIONS
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// STRING FUNCTIONS (str.c)
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
void	ft_putstr(char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);

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
char	*ft_itoa(int n);

#endif
