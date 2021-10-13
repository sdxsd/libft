all: libft re bonus so 

# Main compiling grouping. 
libft:
	clang -Wall -Wextra -Werror -c $(wildcard *.c) 
	
re: libft
	ar -rc libft.a $(wildcard *.o)

bonus: 
	echo "h"

clean:
	rm $(wildcard *.o) $(wildcard *.a) $(wildcard *.so)
	
so: 
	clang -Wall -Wextra -Werror -shared $(wildcard *.o) -o libft.so