#include "my.h"

void	stock_args(int ac, char **av, args *stock)
{
  if (strisnum(av[1]) == 0 && strisnum(av[2]) == 0)
    {
      stock->x = my_getnbr(av[1]);
      stock->y = my_getnbr(av[2]);
    }
  else
    my_puterror("Arguments must be numbers only");
  stock->generation = "default";
  if (ac == 4)
    {
      if (strcmp(av[3], "perfect") == 0)
	stock->generation = "perfect";
      else
	my_puterror("Arguments failed");
    }
}
