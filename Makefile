##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC		=		my_putstr.c		\
				my_putchar.c	\
				bootstrap.c		\
				my_getnbr.c		\
				my_put_nbr.c	\
				error.c			\
				main.c			\
				my_strtol.c		\
				my_strlen.c		\
				my_str_to_word_array.c


OBJ		=		$(SRC:.c=.o)

NAME	=		bsq

all:		$(OBJ)
		gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME)

clean:
		rm -rf *.o

fclean: clean
		rm -f $(NAME)

re: 	fclean all
