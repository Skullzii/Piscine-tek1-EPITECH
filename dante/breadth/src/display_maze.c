#include "my.h"

void	display_maze(char **maze)
{
  int	i;
  int	n;

  i = 0;
  while (maze[i])
    {
      n = 0;
      while (maze[i][n])
	{
	  if (maze[i][n] == 'a')
	    maze[i][n] = '*';
	  printf("%c", maze[i][n]);
	  n++;
	}
      printf("\n");
      i++;
    }
}
