##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC		=		./lib/my/error.c	\
				./lib/my/find_square.c 	\
				./lib/my/my_getnbr.c 	\
				./lib/my/my_put_nbr.c 		\
				./lib/my/my_putchar.c 	\
				./lib/my/my_putstr.c 	\
				./lib/my/my_str_to_word_array.c \
				./lib/my/my_strlen.c 	\
				./lib/my/my_strtol.c

MAIN	= 		main.c			\


OBJ		=		$(SRC:.c=.o)

NAME	=		bsq

LIBMY	=		libmy.a

all:		$(OBJ)
		ar rc $(LIBMY) $(OBJ)
		gcc -Wall -Wextra -o $(NAME) $(MAIN) $(LIBMY) \

clean:
		rm -rf ./lib/my/*.o

fclean: clean
		rm -f $(NAME)
		rm -f $(LIBMY)

re: 	fclean all
