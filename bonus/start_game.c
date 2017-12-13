/*
** EPITECH PROJECT, 2017
** PSU_my_sokoban_2017
** File description:
** PSU_my_sokoban_2017 made by Sanchez Lucas
*/

#include "my.h"

void next_map(int level)
{
	char *str = "maps/map";
	char *nbr_map = int_to_str(level);
	char *filepath = my_strcat(str, nbr_map);
	char **new_map = load_2d_arr_from_file(filepath);
	coord_t size = find_size_of_map(filepath);

	my_loop(new_map, size, level);
}

void my_loop(char **map, coord_t size, int level)
{
	char **map_copy = mem_dup_2d_array(map, size.height, size.width);
	int find_key = 0;
	int nbr_o = find_o_positions(map, size);

	if (level == 11)
		win();
	while (1) {
		clear();
		scan_keyboard(map, size, find_key);
		display_map(map, size, map_copy, level);
		if (check_win_or_lose(map, size, map_copy, nbr_o) == 1)
			break;
		find_key = getch();
		if (find_key == 32)
			start_game();
		refresh();
	}
	level += 1;
	next_map(level);
}

void start_game(void)
{
	char **map = load_2d_arr_from_file("maps/map1");
	coord_t size = find_size_of_map("maps/map1");
	char **map_copy = mem_dup_2d_array(map, size.height, size.width);
	int level = 1;

	my_loop(map_copy, size, level);
}
