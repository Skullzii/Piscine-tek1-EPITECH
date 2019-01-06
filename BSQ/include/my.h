#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <limits.h>

void	my_putchar(char c);
void	putstr(char *str);
void	my_putstr(char *str);
void	print_err(char *str);
void	put_error(char *str);
void	*my_malloc(size_t s);
void	my_free(void *ptr);
void	find_Square(char **map);
void	replace_in_zero(char **map);
void	replace_in_one(char **map);
void	init_map(char **map);
void	get_max(char **map, int x, int y);
void	disp_map(char **map);
void	get_square(char **map, int x, int y, char max);
char	**my_str_to_wordtab(char *str);
char	*my_strncpy(char *dest, char *src, int n);
char	get_min(char **map, int c, int j);
int	check_arg(int ac);
int	my_show_wordtab(char **tab);
int	count_words(char *str);
int	my_len(char *str);
int	my_strlen(char *str);
int	get_x(char **map);
int	get_y(char **map, int j);

#endif
