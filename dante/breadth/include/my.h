#ifndef MY_H_
# define MY_H_

# include <limits.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct s_list
{
  int	y;
  int	x;
  char	**maze;
}	t_list;

void	get_file(char *str, t_list *list);
void	init_maze(t_list *list, char *str);
void	display_maze(char **maze);
void	free_list(char **maze);
int	solve_maze(int x, int y, t_list *list);

void	my_print_err(char *str);
void	my_puterror(char *str);
void	*my_malloc(size_t s);
int	my_strlen(char *str);
char	*my_realloc(char *str, size_t size); 
char	*get_next_line(const int fd);

#endif /*MY_H_*/
