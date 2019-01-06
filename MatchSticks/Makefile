NAME	= matchstick

SRC	= functions.c \
	  game.c \
	  player.c \
	  main.c \
	  get_next_line.c \
	  my_put_nbr.c \
	  my_getnbr.c \
	  print.c \
	  check.c

OBJ	= $(SRC:.c=.o)

RM	= rm -rf

CFLAGS  += -Wextra -Wall
CFLAGS  += -ansi -pedantic
CFLAGS  += -Iinclude

all: $(NAME)

$(NAME): $(OBJ)
	gcc -g3 $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
