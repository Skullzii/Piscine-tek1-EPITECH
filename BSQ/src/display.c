#include "my.h"

void	disp_map(char **map)
{
  int	i;
  int	j;

  j = 1;
  while (map[j])
    {
      i = 0;
      while (map[j][i])
	{
	  if (map[j][i] == '0')
	    {
	      map[j][i] = 'o';
	      i++;
	    }
	  else if (map[j][i] == 'x')
	    i++;
	  else
	    {
	      map[j][i] = '.';
	      i++;
	    }
	}
      j++;
    }
  my_show_wordtab(map);
}
