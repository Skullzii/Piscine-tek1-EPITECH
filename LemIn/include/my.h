#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list anthill;

typedef struct	t_list
{
  char	*anths;
  char	**room;
  char	**tunel;
}	save;

struct s_list
{
  char	*line;
  void	*next;
  void	*previous;
};

void	stock_room(save *list, char *str);
void	stock_tunel(save *list, char *str);

void	put_in_list(char *str, anthill **lemin);
void	my_display(char *str);
int	display_map(save *list);

char	*check_tcoord(char *str);
char	*check_rcoord(char *str);
int	check_cmp(char **room1, char **room2);
int	cmp_check(char **room, char **room1, int i);
int	cmp_rooms(char **room, int i);
int     check_tunel(char **tunel);
int     check_rooms(char **room);
int	check_anths(char *str);
int	check_line(char *line);
int	check_map(save *map);
int	check_char(char *str, char c);
int	check_and_stock(anthill **lemin, save *list);

char	get_buff(const int fd);
char	*get_next_line(const int fd);
void	*my_malloc(size_t s);
char	*my_realloc(char *str, size_t size);
char	**my_str_to_wordtab(char *str);

int	strisnum(char *str);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_strcmp(char *s1, char *s2);
int	my_getnbr(char *str);
void	my_putchar(char c);
char	*my_strcat(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strcpy(char *dest, char *src);


#endif /*MY_H_*/
