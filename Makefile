##
## EPITECH PROJECT, 2018
## PSU_my_sokoban_2018
## File description:
## __DESCRIPTION__
##

SRC	=	src/main.c		\
		src/fonction.c	\
		src/get_map.c	\
		src/pose_player.c

OBJ	=	$(SRC:.c=.o)

CFLAG	=	-Wall -Wextra -I./include

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lncurses

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f *#

fclean:	clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
