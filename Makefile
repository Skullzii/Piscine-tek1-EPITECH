NAME	= my_lib.a

SRC	= *.c

CFLAGS	= -W -Wall -I.

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) -c $(SRC)
	ar rc  $(NAME) $(OBJ)
	ranlib $(NAME)
	cp ./my_lib.a ../

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
