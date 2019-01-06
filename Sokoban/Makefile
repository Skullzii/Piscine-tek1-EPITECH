NAME	= my_sokoban

SRCS	= ./src/my_sokoban.c \
	  ./src/functions.c \
	  ./src/my_error.c \
	  ./src/my_str_to_wordtab.c \
	  ./src/malloc.c \
	  ./src/my_strncpy.c \
	  ./src/key.c \
	  ./src/game.c \
	  ./src/mouv.c \
	  ./src/display.c \
	  ./src/my_strdup.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc

RM	= rm -rf

CFLAGS	+= -Wextra -Wall
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -Iinclude

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -lncurses

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
