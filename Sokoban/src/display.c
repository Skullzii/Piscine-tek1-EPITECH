#include "my.h"

void	get_sokoban(char **map, int *x, int *y)
{
  int	i;
  int	j;

  i = 0;
  *x = 0;
  *y = 0;
  while (map[i])
    {
      j = 0;
      while (map[i][j])
	{
	  if (map[i][j] == 'P')
	    {
	      *x = i;
	      *y = j;
	    }
	  j++;
	}
      i++;
    }
  if (*x == 0 && *y == 0)
    put_error("No sokoban");
}

void	get_map_size(char **map, int *W, int *H)
{
  int	i;
  int	j;

  i = 0;
  while (map[i])
    {
      j = 0;
      while (map[i][j])
	j++;
      i++;
    }
  *W = j - 1;
  *H = i - 1;
}

void	disp_map(char **map)
{
  int	i;
  int	j;
  int	W;
  int	H;

  get_map_size(map, &W, &H);
  i = 0;
  while (map[i])
    {
      j = 0;
      while (map[i][j])
	{
	  mvaddch((LINES / 2) + i - (H / 2),
		  (COLS / 2) + j - (W / 2), map[i][j]);
	  j++;
	}
      i++;
    }
  move(i + 1, 0);
  refresh();
}
