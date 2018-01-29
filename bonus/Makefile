##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## my_ls_bootstrap - Makefile
##

SRC	= 	src/main_bonus.c	\
		src/load_map.c	\
		src/display_map.c	\
		src/change_position.c	\
		src/scan_keyboard.c	\
		src/find_o_positions.c	\
		src/check_win_or_lose.c	\
		src/home_screen.c	\
		src/start_game.c	\
		src/win.c	\

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
