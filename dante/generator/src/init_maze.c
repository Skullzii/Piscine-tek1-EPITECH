#include "my.h"

void	init_maze(args *stock)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  if ((stock->maze = malloc(sizeof(char *) * (stock->y + 1))) == NULL)
    my_puterror("Malloc failled");
  while (i < stock->y)
    {
      if ((stock->maze[i] = malloc(sizeof(char *) * stock->x + 1)) == NULL)
	my_puterror("Malloc failled");
      count = 0;
      while (count < stock->x)
	{
	  stock->maze[i][count] = 'X';
	  count ++;
	}
      stock->maze[i][count] = 0;
      i++;
    }
  stock->maze[i] = 0;
}
