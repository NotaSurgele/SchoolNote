##
## EPITECH PROJECT, 2020
## B-CPE-110-RUN-1-1-BSQ-alexis.picard
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

RM	=	rm -rf

INCLUDE	=	-I../../include

all:
	gcc -c -g3 *.c $(INCLUDE)
	ar rc libmy.a *.o
	cp libmy.a ../

fclean:
		$(RM) $(OBJ)
		$(RM) libmy.a
		$(RM) ../libmy.a