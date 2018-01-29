/*
** EPITECH PROJECT, 2017
** PSU_my_sokoban_2017
** File description:
** PSU_my_sokoban_2017 made by Sanchez Lucas
*/

#include "my.h"

void win(void)
{
	char **str = load_2d_arr_from_file("text/win.txt");
	coord_t size = find_size_of_map("text/win.txt");
	int i = 0;

	clear();
	while (i < size.height) {
		mvprintw((LINES / 2) - (size.height / 2 - i),
			(COLS / 2) - (size.width / 2), str[i]);
		i++;
	}
	refresh();
	usleep(5000000);
	endwin();
	exit (0);
}
