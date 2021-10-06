all: libft re

# Main compiling grouping. 
libft: 
	clang -Wall -Wextra -Werror -c $(wildcard *.c) 
	
re: 
	ar -rc libft.a $(wildcard *.o)
	
