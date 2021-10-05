all: libft fclean clean re

# Main compiling function. 
libft: atoi file_f is is_2 mem str to 

# Compiling individual files. 
atoi: 
	clang -Wall -Wextra -Werror -c atoi.c 
file_f:
	clang -Wall -Wextra -Werror -c file_f.c 
is:
	clang -Wall -Wextra -Werror -c is.c
is_2:
	clang -Wall -Wextra -Werror -c is_2.c
mem:
	clang -Wall -Wextra -Werror -c mem.c
str:
	clang -Wall -Wextra -Werror -c str.c 
to:
	clang -Wall -Wextra -Werror -c to.c 
	