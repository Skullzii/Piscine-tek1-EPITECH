#ifndef _MY_H_
# define _MY_H_
# ifndef READ_SIZE
# define READ_SIZE (100)
# endif /*READ_SIZE*/

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

void	my_putchar(char c);
void	my_putstr(char *str);
void	fill_tab(int *matchsticks, int nb);
void	match(int n, int nb,int s);
void	print_game(int *line, int nb);
void	*my_malloc(size_t s);
void	ia_move(int nb, int line, int *matchsticks, int nbmax);
int	check_line(int line, int nb);
int	check_char(char *str);
int	check_match(int *matchsticks, int nb);
int	move_game(int nb, int line, int *matchsticks);
int	check_nbalum(int nbalum, int nb);
int	my_put_nbr(int nb);
int	game(int *matchsticks, int nbmap, int nbalum, int i);
int	get_line(int *matchsticks, int nb, int nbmap);
int	ia_play(int *matchsticks, int nbmap, int nbalum);
int	play(int *matchsticks, int nbmap, int nbalum);
int	my_getnbr(char *str);
char	get_buff(const int fd);
char	*my_realloc(char *str, size_t size);
char	*get_next_line(const int fd);

#endif /*_MY_H_*/
