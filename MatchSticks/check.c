#include "my.h"

int	check_nbalum(int nbalum, int nb)
{
  if (nb > nbalum)
    {
      my_putstr("Error: you cannot remove more than ");
      my_put_nbr(nbalum);
      my_putstr(" matches per turn\n");
      return (84);
    }
  else if (nb <= 0)
    {
      my_putstr("Error: you have to remove at least one match\n");
      return (84);
    }
  return (0);
}

int	check_line(int line, int nb)
{
  if (nb > line || nb <= 0)
    {
      my_putstr("Error: this line is out of range\n");
      return (84);
    }
  return (0);
}

int	check_char(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  my_putstr("Error: invalid input (positive number expected)\n");
	  return (84);
	}
      i++;
    }
  return (0);
}
