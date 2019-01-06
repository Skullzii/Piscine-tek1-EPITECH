#include "my.h"

int	strisnum(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  if (str[i] == '#')
	    return (0);
	  return (1);
	}
      i++;
    }
  return (0);
}

int	check_char(char *str, char c)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '#')
	return (0);
      if (str[i] == c)
	return (1);
      i++;
    }
  return (0);
}

void	stock_room(save *list, char *str)
{
  int	i;
  int	count;
  char	**tmp;

  i = 0;
  count = 0;
  if (list->room == NULL)
    list->room = malloc(sizeof(char *) * (i + 2));
  while (list->room[i] != NULL)
    i++;
  tmp = malloc(sizeof(char *) * (i + 2));
  while (count < i)
    {
      tmp[count] = list->room[count];
      count++;
    }
  tmp[count] = str;
  tmp[count + 1] = NULL;
  list->room = tmp;
}

void	stock_tunel(save *list, char *str)
{
  int	i;
  int	count;
  char	**tmp;

  i = 0;
  count = 0;
  if (list->tunel == NULL)
    list->tunel = malloc(sizeof(char *) * (i + 2));
  while (list->tunel[i] != NULL)
    i++;
  tmp = malloc(sizeof(char *) * (i + 2));
  while (count < i)
    {
      tmp[count] = list->tunel[count];
      count++;
    }
  tmp[count] = str;
  tmp[count + 1] = NULL;
  list->tunel = tmp;
}

int		check_and_stock(anthill **lemin, save *list)
{
  anthill	*tmp;

  tmp = *lemin;
  while (tmp != NULL)
    {
      if (tmp->line[0] == '#')
	{
	  if (my_strcmp(tmp->line, "##start") == 0 ||
	      my_strcmp(tmp->line, "##end") == 0)
	    stock_room(list, tmp->line);
	}
      else if (strisnum(tmp->line) == 0)
	list->anths = tmp->line;
      else if (check_char(tmp->line, ' ') == 1)
	stock_room(list, tmp->line);
      else if (check_char(tmp->line, '-') == 1)
	stock_tunel(list, tmp->line);
      tmp = tmp->next;
    }
  return (0);
}
