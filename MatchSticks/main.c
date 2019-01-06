#include "my.h"

void	fill_tab(int *matchsticks, int  nb)
{
  int	i;
  int	count;

  i = 0;
  count = 1;
  while (i <= nb - 1)
    {
      matchsticks[i] = count;
      i++;
      count = count + 2;
    }
}

int	main(int ac, char **av)
{
  int	*matchsticks;
  int	i;
  int	n;

  n = 0;
  if (ac == 3)
    {
      if (my_getnbr(av[1]) < 1 || my_getnbr(av[1]) > 100)
	return (84);
      if (my_getnbr(av[2]) < 1)
	return (84);
      if ((matchsticks = malloc(sizeof(int) * my_getnbr(av[1]) + 1)) == NULL)
	return (84);
      fill_tab(matchsticks, my_getnbr(av[1]));
      if ((i = game(matchsticks, my_getnbr(av[1]), my_getnbr(av[2]), n)) == 1)
	return (1);
      else if (i == 2)
	return (2);
      else
	return (0);
    }
  else
    return (84);
  return (0);
}
