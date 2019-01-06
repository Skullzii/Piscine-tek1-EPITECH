#include "my.h"

void	display_maze(char **maze)
{
  int	i;

  i = 0;
  while (maze[i])
    {
      printf("%s\n", maze[i]);
      i++;
    }
}
