# Þe makefile mæken þe bibliotëk out þe .c filen. 
# Et workt med ān system fan funktionen ānd underfunktionen.
# Ƿen þe makefile habban gecompilerd þe .c filen naor .o filen
# et mæken þan ān nïwe arkive file med alle þe .c filen. 
# Þe "clean" funktion reweiderd alle .o .a af .so filen. 

CC = clang
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
BONUS_FILES = \

CFILES = \
		ft_atoi.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_revstr.c \
		ft_strncpy.c \
		ft_bzero.c \
		ft_lstadd_back.c \
		ft_memcmp.c \
		ft_split.c \
		ft_strndup.c \
		ft_calloc.c \
		ft_lstadd_front.c \
		ft_memcpy.c \
		ft_strchr.c \
		ft_strnstr.c \
		ft_isalnum.c \
		ft_lstclear.c \
		ft_memmove.c \
		ft_strdup.c \
		ft_strrchr.c \
		ft_isalpha.c \
		ft_lstdelone.c \
		ft_memset.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_isascii.c \
		ft_lstiter.c \
		ft_putchar_fd.c \
		ft_strlcat.c \
		ft_substr.c \
		ft_isdigit.c \
		ft_lstlast.c \
		ft_putendl_fd.c \
		ft_strlcpy.c \
		ft_tolower.c \
		ft_islower.c \
		ft_lstmap.c \
		ft_putnbr_fd.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_isprint.c \
		ft_lstnew.c \
		ft_putstr.c \
		ft_strmapi.c \
		ft_isupper.c \
		ft_lstsize.c \
		ft_putstr_fd.c \
		ft_strncmp.c
OFILES = $(CFILES:.c=.o)

all: libft re

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

libft:
	$(CC) $(CFLAGS) -c $(CFILES)
	
re: libft
	ar -rc libft.a $(OFILES)

bonus:


clean:
	rm $(OFILES) $(NAME)
	
so: libft
	$(CC) $(CFLAGS) $(OFILES) -o libft.so