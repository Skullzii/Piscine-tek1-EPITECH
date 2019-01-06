#include "my.h"

void	print_swap(char*str, int *n)
{
  if (*n == 0)
    {
      my_putstr(str);
      *n = 1;
    }
  else
    {
      my_putchar(' ');
      my_putstr(str);
    }
}

t_list		*put_in(t_list *list, int nb)
{
  t_list	*num;
  t_list	*tmp;

  num = malloc(sizeof(t_list));
  num->c = nb;
  num->next = NULL;
  if (list == NULL)
    return (num);
  tmp = list;
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = num;
  return (list);
}

void		swap_list(t_list **l_a, t_list **l_b)
{
  int		i;
  int		n;

  i = 1;
  n = 0;
  while (i == 1)
    {
      i = 0;
      while ((*l_a)->next != NULL)
        {
          if ((*l_a)->c > (*l_a)->next->c)
            {
              sa(l_a, &n);
              i = 1;
            }
          pb(l_a, l_b, &n);
	}
      while (*l_b != NULL)
        pa(l_a, l_b, &n);
    }
}

int		check_list(t_list **l_a, t_list **l_b, int ac)
{
  t_list	*tmp;
  int		len;
  int		i;

  i = 0;
  tmp = *l_a;
  len = ac - 2;
  while (tmp->next != NULL && tmp->c < tmp->next->c)
    {
      i++;
      tmp = tmp->next;
    }
  if (i == len)
    return (0);
  else
    swap_list(l_a, l_b);
  return (0);
}

int		main(int ac, char **av)
{
  t_list	*l_a;
  t_list	*l_b;
  int		i;
  int		nb;

  l_a = NULL;
  l_b = NULL;
  i = 1;
  if (ac < 3)
    {
      my_putchar('\n');
      return (0);
    }
  while (av[i] != NULL)
    {
      nb = my_getnbr(av[i]);
      l_a = put_in(l_a, nb);
      i++;
    }
  check_list(&l_a, &l_b, ac);
  my_putchar('\n');
  return (0);
}
