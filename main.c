/*
** EPITECH PROJECT, 2017
** PSU_my_sokoban_2017
** File description:
** PSU_my_sokoban_2017 made by Sanchez Lucas
*/

#include "my.h"

void error_gesture(int size, char **str)
{
	(void) str;
	if (size != 2) {
		my_printf("Please enter a valid map\n");
		exit (84);
	}
	if (open(str[1], O_RDONLY) == -1) {
		my_printf("Please enter a valid map\n");
		exit (84);
	}
}

void my_loop(char **map, coord_t size)
{
	char **map_copy = mem_dup_2d_array(map, size.height, size.width);
	int find_key = 0;
	int nbr_o = find_o_positions(map, size);

	initscr();
	curs_set(0);
	noecho();
	while (1) {
		clear();
		scan_keyboard(map, size, find_key);
		display_map(map, size, map_copy);
		check_win_or_lose(map, size, map_copy, nbr_o);
		find_key = getch();
		if (find_key == 32)
			my_loop(map_copy, size);
		refresh();
	}
}

int main(int ac, char **av)
{
	char **map;
	coord_t size;

	error_gesture(ac, av);
	map = load_2d_arr_from_file(av[1]);
	size = find_size_of_map(av[1]);
	find_o_positions(map, size);
	my_loop(map, size);
	return (0);
}
