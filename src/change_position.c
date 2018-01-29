/*
** EPITECH PROJECT, 2017
** PSU_my_sokoban_2017
** File description:
** PSU_my_sokoban_2017 made by Sanchez Lucas
*/

#include "my.h"

void up_arrow(char **map, coord_t pos_player)
{
	int i = pos_player.height;
	int j = pos_player.width;

	if (map[i - 1][j] == ' ' || map[i - 1][j] == 'O') {
		map[pos_player.height][pos_player.width] = ' ';
		map[pos_player.height - 1][pos_player.width] = 'P';
	} else if (map[i - 1][j] == 'X'
	&& (map[i - 2][j] == ' ' || map[i - 2][j] == 'O')) {
		map[pos_player.height][pos_player.width] = ' ';
		map[pos_player.height - 1][pos_player.width] = 'P';
		map[pos_player.height - 2][pos_player.width] = 'X';
	}
}

void down_arrow(char **map, coord_t pos_player)
{
	int i = pos_player.height;
	int j = pos_player.width;

	if (map[i + 1][j] == ' ' || map[i + 1][j] == 'O') {
		map[pos_player.height][pos_player.width] = ' ';
		map[pos_player.height + 1][pos_player.width] = 'P';
	} else if (map[i + 1][j] == 'X'
	&& (map[i + 2][j] == ' ' || map[i + 2][j] == 'O')) {
		map[pos_player.height][pos_player.width] = ' ';
		map[pos_player.height + 1][pos_player.width] = 'P';
		map[pos_player.height + 2][pos_player.width] = 'X';
	}
}

void left_arrow(char **map, coord_t pos_player)
{
	int i = pos_player.height;
	int j = pos_player.width;

	if (map[i][j - 1] == ' ' || map[i][j - 1] == 'O') {
		map[pos_player.height][pos_player.width] = ' ';
		map[pos_player.height][pos_player.width - 1] = 'P';
	} else if (map[i][j - 1] == 'X'
	&& (map[i][j - 2] == ' ' || map[i][j - 2] == 'O')) {
		map[pos_player.height][pos_player.width] = ' ';
		map[pos_player.height][pos_player.width - 1] = 'P';
		map[pos_player.height][pos_player.width - 2] = 'X';
	}
}

void right_arrow(char **map, coord_t pos_player)
{
	int i = pos_player.height;
	int j = pos_player.width;

	if (map[i][j + 1] == ' ' || map[i][j + 1] == 'O') {
		map[pos_player.height][pos_player.width] = ' ';
		map[pos_player.height][pos_player.width + 1] = 'P';
	} else if (map[i][j + 1] == 'X'
	&& (map[i][j + 2] == ' ' || map[i][j + 2] == 'O')) {
		map[pos_player.height][pos_player.width] = ' ';
		map[pos_player.height][pos_player.width + 1] = 'P';
		map[pos_player.height][pos_player.width + 2] = 'X';
	}
}
