##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC		=		my_putstr.c		\
				my_putchar.c	\
				boot_BSQ.c		\
				my_getnbr.c		\
				my_put_nbr.c	\
				BSQ_error.c		\
				BSQ_main.c		\
				my_strtol.c		\
				my_strlen.c


OBJ		=		$(SRC:.c=.o)

NAME	=		bsq

all:		$(OBJ)
		gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME)

clean:
		rm -rf *.o

fclean: clean
		rm -rf *.o
		rm -f $(NAME)

re: 	fclean all
