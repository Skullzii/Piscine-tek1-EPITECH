#include "my.h"

void	my_display(char *str)
{
  int	i;

  i = 0;
  if (my_strcmp(str, "##start") == 0 ||
      my_strcmp(str, "##end") == 0)
    my_putstr(str);
  else
    {
      while (str[i])
	{
	  if (str[i] == '#')
	    {
	      while (str[i])
		i++;
	    }
	  else
	    {
	      my_putchar(str[i]);
	      i++;
	    }
	}
    }
  my_putchar('\n');
}

int	display_map(save *list)
{
  int	i;

  i = 0;
  my_putstr("#number_of_ants\n");
  my_display(list->anths);
  my_putstr("#rooms\n");
  if (check_rooms(list->room) == 84)
    return (84);
  my_putstr("#tunnels\n");
  if (list->tunel == NULL)
    return (84);
  while (list->tunel[i])
    {
      if ((list->tunel[i] = check_tcoord(list->tunel[i])) == NULL)
	return (84);
      else
	{
	  my_display(list->tunel[i]);
	  i++;
	}
    }
  my_putstr("#moves\n");
  return (0);
}
