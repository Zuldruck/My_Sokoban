##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## my_ls_bootstrap - Makefile
##

SRC	= 	main_bonus.c	\
		load_map.c	\
		display_map.c	\
		change_position.c	\
		scan_keyboard.c	\
		find_o_positions.c	\
		check_win_or_lose.c	\
		home_screen.c	\
		start_game.c	\
		win.c	\

OBJ	=	$(SRC:.c=.o)

CC	= 	gcc -Wextra -Wall -g3

NAME	=	my_sokoban

LIB_NAME	=	libmy.a

CFLAGS	=	-I./include

FLAGS	=	-L../lib/my -lmy -lncurses

all:	prepare_lib $(NAME)

prepare_lib:
	make -C ../lib/my

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS) $(CFLAGS)

clean:
	make clean -C ../lib/my
	rm -f $(OBJ)

fclean:	clean
	rm -f ../lib/my/$(LIB_NAME)
	rm -f $(NAME)

re:	fclean all
