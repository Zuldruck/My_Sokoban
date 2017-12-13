/*
** EPITECH PROJECT, 2017
** my h
** File description:
** all my headers
*/

#ifndef MY_H
#define MY_H

#include <ncurses.h>
#include <stdarg.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

typedef struct tab_s {
	char c;
	void (*fptr)(va_list);
} tab_t;

typedef struct spec_s {
	char c;
	int (*fptr)(va_list, int);
} spec_t;

typedef struct coord_s {
	int width;
	int height;
} coord_t;

typedef struct nbr_s {
	int o;
	int x;
} nbr_t;

void my_putchar(char);
int my_put_nbr(int);
int my_putstr(char const *);
int my_strlen(char const *);
int my_getnbr(char const *);
void func_init(tab_t *print, spec_t *spec);
void my_put_char(va_list);
void my_put_int(va_list);
void my_put_unsigned_int(va_list);
void my_put_str(va_list);
void my_put_ampersand(va_list);
void my_putnbr_hexa(va_list);
void my_putnbr_hexa_lowcase(va_list);
void my_putnbr_octal(va_list);
void my_putnbr_binary(va_list);
void my_putnbr_base(int, char *);
void my_putnbr_base_lowcase(long long, int);
void my_put_str_non_printable(va_list list);
int my_printf(char *, ...);
void my_put_pointer_adress(va_list list);
int spec_zero(va_list, int);
int spec_dot(va_list, int);
int spec_space(va_list, int);
void my_put_float(va_list);
int spec_plus(va_list, int);
int spec_minus(va_list, int);
int spec_hashtag(va_list, int);
void display_map(char **, coord_t, char **, int);
char **load_2d_arr_from_file(char const *);
coord_t find_size_of_map(char *);
char *load_file_in_mem(char const *);
char *my_strcat(char *, char *);
void scan_keyboard(char **map, coord_t, int);
void up_arrow(char **map, coord_t pos_player);
void down_arrow(char **map, coord_t pos_player);
void left_arrow(char **map, coord_t pos_player);
void right_arrow(char **map, coord_t pos_player);
int find_o_positions(char **, coord_t);
char **mem_dup_2d_array(char **arr, int nb_rows, int nb_cols);
char *int_to_str(int);
int check_win_or_lose(char **map, coord_t size, char **map_copy, int nbr_o);
int find_x(char **map, coord_t size);
void home_screen(void);
void start_game(void);
void my_loop(char **, coord_t, int);
void win(void);

#endif   /* MY_H */
