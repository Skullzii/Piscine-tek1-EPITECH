NAME	= lem_in

SRCS	= ./src/functions.c \
	  ./src/get_next_line.c \
	  ./src/check.c \
	  ./src/put_in_list.c \
	  ./src/my_strcmp.c \
	  ./src/my_getnbr.c \
	  ./src/my_strcpy.c \
	  ./src/my_strncpy.c \
	  ./src/my_str_to_wordtab.c \
	  ./src/my_strcat.c \
	  ./src/check_map.c \
	  ./src/display.c \
	  ./src/cmp_rooms.c \
	  ./src/main.c

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
