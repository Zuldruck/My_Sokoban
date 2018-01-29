/*
** EPITECH PROJECT, 2017
** PSU_my_sokoban_2017
** File description:
** PSU_my_sokoban_2017 made by Sanchez Lucas
*/

#include "my.h"

void play_button(int a, coord_t size)
{
	if (a == 1) {
		attron(A_BOLD);
		mvprintw((LINES / 2) + (size.height / 2 + 2),
			(COLS / 2) - 10, "Play");
		attroff(A_BOLD);
	} else {
		attron(A_STANDOUT);
		mvprintw((LINES / 2) + (size.height / 2 + 2),
			(COLS / 2) - 10, "Play");
		attroff(A_STANDOUT);
	}
}

void exit_button(int a, coord_t size)
{
	if (a == -1) {
		attron(A_BOLD);
		mvprintw((LINES / 2) + (size.height / 2 + 4),
			(COLS / 2) - 10, "Exit");
		attroff(A_BOLD);
	} else {
		attron(A_STANDOUT);
		mvprintw((LINES / 2) + (size.height / 2 + 4),
			(COLS / 2) - 10, "Exit");
		attroff(A_STANDOUT);
	}
}

int check_button(int find_key, int a)
{
	int b = 1;

	(find_key == 65 && a == 1 ? b = -1 : 0);
	(find_key == 66 && a == -1 ? b = -1 : 0);
	if (find_key == '\n') {
		if (a == -1)
			start_game();
		else if (a == 1) {
			clear();
			attron(A_UNDERLINE | A_BOLD);
			mvprintw(LINES / 2,
				COLS / 2 - 10, "See you next time !");
			refresh();
			usleep(2000000);
			endwin();
			exit (0);
		}
	}
	return (b);
}

void home_screen(void)
{
	char **title = load_2d_arr_from_file("text/title.txt");
	coord_t size = find_size_of_map("text/title.txt");
	int i = 0;
	int find_key;
	int a = -1;

	while (1) {
		clear();
		while (i < size.height) {
			mvprintw((LINES / 2) - (size.height / 2 - i + 2),
			(COLS / 2) - (size.width / 2), title[i]);
			i++;
		}
		i = 0;
		a *= check_button(find_key, a);
		play_button(a, size);
		exit_button(a, size);
		find_key = getch();
		refresh();
	}
	endwin();
}
