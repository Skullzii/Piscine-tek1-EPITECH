NAME	= my_ls

SRCS	= ./src/my_ls.c \
	  ./src/functions.c \
	  ./src/my_error.c \
	  ./src/check.c \
	  ./src/list.c \
	  ./src/my_put_nbr.c \
	  ./src/print.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc

RM	= rm -rf

CFLAGS  +=      -Wextra -Wall
CFLAGS  +=      -ansi -pedantic
CFLAGS  +=      -Iinclude

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
