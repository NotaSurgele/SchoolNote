##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

SRC =	main.c	\
		src/database/create_or_load_db.c

SRC_UT	=

SRC_TEST	=

OBJ	=	$(SRC:.c=.o)

OBJ_M	=	$(SRC_M:.c=.o)

OBJ_UT	=	$(SRC_UT:.c=.o)

INCLUDE	=	-I./include

NAME	=	school

NAME_UT	=	unit_tests

CFLAGS	=	-W -Werror -Wall -Wextra -I./include -g -g3 -ggdb

CFLAGS_UT	=	-lcriterion --coverage

LIB	=	-l

RM	=	rm -rf

all:		$(NAME)

$(NAME):    $(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) $(CFLAGS) -Llib/ -lmy

tests_run:	$(OBJ) $(OBJ_UT)
			make -C lib/my/
			gcc -o $(NAME_UT) $(SRC_TEST) $(SRC_UT) $(INCLUDE) $(CFLAGS_UT) -Llib/ -lmy
			./$(NAME_UT)
			gcovr -b --exclude tests/
clean:
		$(RM) $(OBJ)
		$(RM) lib/my/libmy.a
		$(RM) lib/my/*.o

fclean:		clean
		make -C lib/my fclean
		$(RM) $(NAME)
		$(RM) $(NAME_UT)
		$(RM) tests/*.o
		$(RM) *.gc*

fclean_ut:	clean
		$(RM) $(NAME_UT)
		$(RM) $(NAME)

re:		fclean all
