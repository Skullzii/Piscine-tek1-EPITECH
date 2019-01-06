NAME	= generator

SRCS	= ./src/main.c \
	  ./src/error.c \
	  ./src/my_getnbr.c \
	  ./src/functions.c \
	  ./src/generator.c \
	  ./src/random_gen.c \
	  ./src/init_maze.c \
	  ./src/stock_args.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc -g3

RM	= rm -rf

CFLAGS	+= -Wextra -Wall
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -Iinclude

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
