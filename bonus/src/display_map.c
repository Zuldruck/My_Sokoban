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
	for (int i = 0 ; i < size.height ; i++) {
		for (int j = 0 ; map[i][j] != '\n' ; j++)
			replace_o(map, i, j, map_copy);
	}
}

void display_map(char **map, coord_t size, char **map_copy, int level)
{
	int i = 0;
	char *str = my_strcat("Level ", int_to_str(level));
	int len = my_strlen(str);

	check_o_positions(map, size, map_copy);
	if (COLS + 1 < size.width || LINES < size.height) {
		if ((COLS / 2 - 8) < 0)
			mvprintw((LINES / 2), 0, "Window too small");
		mvprintw((LINES / 2), (COLS / 2) - 8, "Window too small");
		return;
	}
	while (i < size.height) {
		mvprintw((LINES / 2) - (size.height / 2 - i),
			(COLS / 2) - (size.width / 2), map[i]);
		i++;
	}
	mvprintw((LINES / 2) - (size.height / 2 + 2),
	(COLS / 2) - (len / 2 + 1), str);
}
