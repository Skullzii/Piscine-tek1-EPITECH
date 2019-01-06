#ifndef MY_H_
# define MY_H_

# include <limits.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
  int	x;
  int	y;
  int	up_check;
  int	left_check;
  char	*generation;
  char	**maze;
}	args;

char	random_gen();
void	stock_args(int ac, char **av, args *stock);
void	generator(args *stock);
void    gen_imperfect_maze(args *stock);
void    gen_perfect_maze(args *stock);
void	init_maze(args *stock);

void	my_print_err(char *str);
void	my_puterror(char *str);
int     strisnum(char *str);
int	my_getnbr(char *str);
int	my_strlen(char *str);

#endif /*MY_H_*/
