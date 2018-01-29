/*
** EPITECH PROJECT, 2017
** PSU_my_sokoban_2017
** File description:
** PSU_my_sokoban_2017 made by Sanchez Lucas
*/

#include "my.h"

void display_help(char **str, int size)
{
	if (size != 2)
		return;
	if ((str[1][0] == '-' && str[1][1] == 'h' && str[1][2] == 0)
	|| (str[1][0] == '-' && str[1][1] == '-' && str[1][2] == 'h'
	&& str[1][3] == 'e' && str[1][4] == 'l' && str[1][5] == 'p'
	&& str[1][6] == 0)) {
		endwin();
		my_printf("USAGE\n\t./my_sokoban\n\nDESCRIPTION\n\t");
		my_printf("Welcome to Sokoban made by Sanchez Lucas.\n\n\t");
		my_printf("The goal of the game is to put all the boxes on");
		my_printf(" all of the storage locations\n\tThere is 10 maps,");
		my_printf(" if you lose a map, you'll go back to the ");
		my_printf("first level");
		my_printf("\n\n\tA map is containing '#' ");
		my_printf("for walls,\n\t'P' for the player, 'X' for boxes ");
		my_printf("and 'O' for storage locations.\n\n");
		exit (0);
	}
}

int main(int ac, char **av)
{
	initscr();
	curs_set(0);
	noecho();
	display_help(av, ac);
	home_screen();
	return (0);
}
