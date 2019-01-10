#ifndef MY_H_
# define MY_H_

# include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct	s_list
{
  int		c;
  struct s_list	*next;
}	t_list;

void	my_putchar(char c);
void	my_swap(int *a, int *b);
void	my_put_nbr(int nb);
void	print_swap(char*str, int *n);
void	swap_list(t_list **l_a, t_list **l_b);
void	sa(t_list **l_a, int *n);
int	pa(t_list **l_a, t_list **l_b, int *n);
int	pb(t_list **l_a, t_list **l_b, int *n);
int	check_list(t_list **l_a, t_list **l_b, int ac);
int	my_puterror(char *str);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
t_list	*put_in(t_list *list, int nb);
t_list	*add_in(t_list *list, int nb);

#endif
