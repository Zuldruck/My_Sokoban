/*
** EPITECH PROJECT, 2017
** PSU_my_sokoban_2017
** File description:
** PSU_my_sokoban_2017 made by Sanchez Lucas
*/

#include "my.h"

void replace_o(char **map, int i, int j, char **map_copy)
{
	if (map[i][j] == ' ' && map_copy[i][j] == 'O')
		map[i][j] = 'O';
}

void check_o_positions(char **map, coord_t size, char **map_copy)
{
	for (int i = 0; i < size.height; i++) {
		for (int j = 0; map[i][j] != '\n'; j++)
			replace_o(map, i, j, map_copy);
	}
}

void display_map(char **map, coord_t size, char **map_copy)
{
	int i = 0;

	check_o_positions(map, size, map_copy);
	if (COLS + 1 < size.width || LINES < size.height) {
		if ((COLS / 2 - 8) < 0)
			mvprintw((LINES / 2), 0, "Window too small");
		mvprintw((LINES / 2), (COLS / 2) - 8, "Window too small");
		return;
	}
	while (i < size.height) {
		mvprintw(i, 0, map[i]);
		i++;
	}
}
