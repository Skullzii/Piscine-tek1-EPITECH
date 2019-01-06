NAME	= bsq

SRC	= ./src/bsq.c \
          ./src/functions.c \
          ./src/my_error.c \
          ./src/malloc.c \
          ./src/my_str_to_wordtab.c \
          ./src/my_strncpy.c \
          ./src/replace.c \
          ./src/display.c

OBJ	= $(SRC:.c=.o)

CFLAGS	+= -Wextra -Wall
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -Iinclude

RM	= rm -rf

CC	= gcc

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
