#include "my.h"

t_list		*add_in(t_list *list, int nb)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  tmp->c = nb;
  tmp->next = list;
  list = tmp;
  return (list);
}

int	pa(t_list **l_a, t_list **l_b, int *n)
{
  int	nb;

  if (*l_b == NULL)
    return (0);
  nb = (*l_b)->c;
  *l_a = add_in(*l_a, nb);
  *l_b = (*l_b)->next;
  print_swap("pa", n);
  return (0);
}

int	pb(t_list **l_a, t_list **l_b, int *n)
{
  int	nb;

  if (*l_a == NULL)
    return (0);
  nb = (*l_a)->c;
  *l_b = add_in(*l_b, nb);
  *l_a = (*l_a)->next;
  print_swap("pb", n);
  return (0);
}

void	sa(t_list **l_a, int *n)
{
  t_list	*tmp;

  tmp = *l_a;
  tmp = tmp->next;
  (*l_a)->next = tmp->next;
  tmp->next = *l_a;
  *l_a = tmp;
  print_swap("sa", n);
}
