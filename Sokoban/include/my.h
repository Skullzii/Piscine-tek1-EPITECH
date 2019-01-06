#ifndef MY_H_
#define MY_H_

#include <ncurses/curses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

void	my_putchar(char c);
void	putstr(char *str);
void	my_putstr(char *str);
void	print_err(char *str);
void	put_error(char *str);
void	get_sokoban(char **map, int *x, int *y);
void	game(char **game_map, char **init_map);
void	check_count(char **map, int count);
void	disp_map(char **map);
void	move_left(int x, int y, char **game_map, char **init_map);
void	move_right(int x, int y, char **game_map, char **init_map);
void	move_bottom(int x, int y, char **game_map, char **init_map);
void	move_top(int x, int y, char **game_map, char **init_map);
void	get_key(int key, char **game_map, char **init_map);
void	get_map_size(char **map, int *W, int *H);
void	*my_malloc(size_t s);
char	*my_strncpy(char *dest, char *src, int n);
char	*get_map(char *av);
char	**my_str_to_wordtab(char *str);
int	check_obj(char **map, int i, int j);
int	check_loose(char **map, char **init_map);
int	check_win(char **game_map, char **init_map);
int	count(char **map, char c);
int	my_len(char *str);
int	my_strlen(char *str);
int	my_show_wordtab(char **tab);
int	count_words(char *str);

#endif
