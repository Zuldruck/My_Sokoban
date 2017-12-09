##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile that compiles my library into /lib
##


SRC	=	my_getnbr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_putnbr_base.c	\
		my_putnbr_base_lowcase.c	\
		my_printf/my_printf.c	\
		my_printf/init.c	\
		my_printf/char.c	\
		my_printf/int.c	\
		my_printf/special_characters.c	\
		my_printf/str.c	\
		my_printf/specifiers.c	\
		my_printf/float.c	\
		int_to_str.c	\
		my_strcat.c	\


OBJ	=	$(SRC:.c=.o)


NAME	=	libmy.a


all: 	$(NAME)


$(NAME):	$(OBJ)
	rm -f $(NAME)
	ar rc $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)
