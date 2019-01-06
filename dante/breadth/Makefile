NAME	= solver

SRCS	= ./src/main.c \
	  ./src/functions.c \
	  ./src/get_next_line.c \
	  ./src/init_maze.c \
	  ./src/get_file.c \
	  ./src/solve_maze.c \
	  ./src/display_maze.c \
	  ./src/free_list.c \
	  ./src/error.c

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
