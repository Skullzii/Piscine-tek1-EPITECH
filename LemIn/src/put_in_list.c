#include "my.h"

void		put_in_list(char *str, anthill **lemin)
{
  anthill	*tmp;
  anthill	*elem;

  elem = malloc(sizeof(anthill));
  elem->line = str;
  elem->next = NULL;
  if (*lemin == NULL)
    {
      elem->previous = NULL;
      *lemin = elem;
    }
  else
    {
      tmp = *lemin;
      while (tmp->next != NULL)
	tmp = tmp->next;
      elem->previous = tmp;
      tmp->next = elem;
    }
}
