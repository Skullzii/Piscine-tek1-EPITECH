#include "my.h"

int	main(int ac, char **av)
{
  args	stock;
  int	i;

  i = 0;
  if (ac < 3 || ac > 4)
    my_puterror("Wrong numbers of arguments");
  stock_args(ac, av, &stock);
  generator(&stock);
  while (stock.maze[i])
    {
      printf("%s\n", stock.maze[i]);
      i++;
    }
  return (0);
}
