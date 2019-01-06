#include "my.h"

void	free_list(char **maze)
{
  int	i;

  i = 0;
  while (maze[i])
    {
      free(maze[i]);
      i++;
    }
  free(maze);
}
