##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile Pong
##

NAME    =       101pong

SRC     =       pong.c \
		my_str_isnum.c \
		main.c 

OBJ     =       $(SRC:.c=.o)

all:            $(NAME)

$(NAME):        $(OBJ)
	cc $(OBJ) -o $(NAME) -lm
clean:
	rm -rf $(OBJ)

fclean:         clean
	rm -rf $(NAME)

re:             fclean all

.PHONY:         all clean fclean re
