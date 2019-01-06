#include "my.h"

int     check_anths(char *str)
{
  int   i;

  i = 0;
  if (str == NULL)
    return (84);
  while (str[i])
    i++;
  if (strisnum(str) != 0)
    return (84);
  else if (i == 0)
    return (84);
  return (0);
}

int	check_line(char *line)
{
  if (line == NULL)
    return (84);
  else if (strisnum(line) != 0)
    {
      if (line[0] != '#' && check_char(line, ' ') != 1 &&
	  check_char(line, '-') != 1)
	return (84);
    }
  return (0);
}

int	put_in(anthill **lemin)
{
  char		*line;
  anthill	*tmp;
  int		count;

  count = 1;
  while ((line = get_next_line(0)) != NULL)
    {
      if (check_line(line) == 84)
	return (84);
      put_in_list(line, lemin);
      count++;
    }
  if (count == 1)
    {
      tmp = *lemin;
      if (strisnum(tmp->line) == 0)
	{
	  my_putstr("#number_of_ants\n");
	  my_display(tmp->line);
	  return (1);
	}
      else
	return (84);
    }
  return (0);
}

int		main()
{
  anthill	*lemin;
  save		save;
  char		*line;
  int	count;

  lemin = NULL;
  save.tunel = NULL;
  save.room = NULL;
  if ((line = get_next_line(0)) != NULL)
    {
      if (check_line(line) == 84)
	return (84);
      put_in_list(line, &lemin);
      count = put_in(&lemin);
      if (count == 84)
	return (84);
      else if (count == 1)
	return (84);
      check_and_stock(&lemin, &save);
      if (check_map(&save) == 84)
	return (84);
      if (display_map(&save) == 84)
	return (84);
    }
  else
    return (84);
  return (0);
}
