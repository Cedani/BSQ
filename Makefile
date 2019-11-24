##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC		=		./lib/my/error.c	\
				./lib/my/find_square.c 	\
				./lib/my/my_getnbr.c 	\
				./lib/my/my_putchar.c 	\
				./lib/my/my_putstr.c 	\
				./lib/my/my_str_to_word_array.c \
				./lib/my/my_strlen.c 	\
				./lib/my/my_strtol.c	\
				./lib/my/my_sort_int_array.c 	\

MAIN	= 		main.c			\

OBJ		=		$(SRC:.c=.o)

TEST	=		./lib/my/test.c 	\

UNIT	= 		unit_tests			\

NAME	=		bsq

LIBMY	=		libmy.a

all:		$(OBJ)
		ar rc $(LIBMY) $(OBJ)
		gcc -Wall -Wextra -o $(NAME) $(MAIN) $(LIBMY) \

run_test:
		gcc -lcriterion --coverage $(TEST) $(SRC) -o $(UNIT)

clean:
		rm -rf ./lib/my/*.o
		rm -rf ./lib/my/*.gcda
		rm -rf ./lib/my/*.gcno
		rm -rf *.gcno
		rm -rf *.gcda

fclean: clean
		rm -f $(NAME)
		rm -f $(LIBMY)
		rm -f $(UNIT)

re: 	fclean all
