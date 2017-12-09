/*
** EPITECH PROJECT, 2017
** PSU_my_sokoban_2017
** File description:
** PSU_my_sokoban_2017 made by Sanchez Lucas
*/

#include "my.h"

void verif_p(char **map, int i, int j, coord_t *pos)
{
	if (map[i][j] == 'P') {
		pos->height = i;
		pos->width = j;
	}
}

coord_t find_pos_player(char **map, coord_t size)
{
	coord_t pos;

	for (int i = 0 ; i < size.height ; i++) {
		for (int j = 0 ; j < size.width ; j++) {
			verif_p(map, i, j, &pos);
		}
	}
	return (pos);
}

/*char **scan_space(char **map, char **map_copy, int key)
{
	if (key == ' ') {
		map = map_copy;
		printw("RESET MAP");
	}
	return (map);
}*/

void scan_keyboard(char **map, coord_t size, int key)
{
	coord_t pos_player = find_pos_player(map, size);

	switch (key) {
	case 65:
		up_arrow(map, pos_player);
		break;
	case 66:
		down_arrow(map, pos_player);
		break;
	case 68:
		left_arrow(map, pos_player);
		break;
	case 67:
		right_arrow(map, pos_player);
		break;
	default:
		return;
	}
}
