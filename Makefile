
NAME = libft.a
SRC = libft.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
 
all: $(NAME)
 
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
 
clean:
	rm -f $(OBJ)
 
fclean: clean
	rm -f $(NAME)
 
re: fclean all
 
.PHONY: all clean fclean re
 