#include "my.h"

int	get_x(char **map)
{
  int	j;

  j = 0;
  while (map[j + 2])
    j++;
  return (j);
}

int	get_y(char **map, int j)
{
  int	i;

  i = 0;
  while (map[j][i + 2])
    i++;
  return (i);
}

void	init_map(char **map)
{
  int	i;
  int	j;
  int	c;
  char	min;

  j = get_x(map);
  i = get_y(map, j);
  while (j >= 1)
    {
      c = i;
      while (c >= 0)
	{
	  if (map[j][c] == '0')
	    c--;
	  else if (map[j][c] == '.')
	    {
	      min = get_min(map, c, j);
	      map[j][c] = min + 1;
	      c--;
	    }
	  else
	    c--;
	}
      j--;
    }
}

void	replace_in_zero(char **map)
{
  int	i;
  int	j;

  j = 0;
  while (map[j])
    {
      i = 0;
      while (map[j][i])
	{
	  if (map[j][i] == 'o')
	    map[j][i] = '0';
	  i++;
	}
      j++;
    }
}

void	replace_in_one(char **map)
{
  int	i;
  int	j;

  j = 0;
  while (map[j] && map[j + 1])
    {
      i = 0;
      while (map[j][i])
	i++;
      if (map[j][i - 1] != 'o')
	map[j][i - 1] = '1';
      j++;
    }
  i = 0;
  while (map[j][i])
    {
      if (map[j][i] != 'o')
	map[j][i] = '1';
      i++;
    }
}
