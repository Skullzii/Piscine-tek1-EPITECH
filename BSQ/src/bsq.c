#include "my.h"

void	get_square(char **map, int x, int y, char max)
{
  int	size;
  int	count1;
  int	count2;
  int	cx;
  int	cy;

  cx = x;
  size = max - 48;
  count1 = 1;
  while (count1 <= size)
    {
      cy = y;
      count2 = 1;
      while (count2 <= size)
	{
	  map[cx][cy] = 'x';
	  cy++;
	  count2++;
	}
      cx++;
      count1++;
    }
}

void	get_max(char **map, int x, int y)
{
  int	i;
  int	j;
  char	max;

  j = 1;
  i = 0;
  max = map[j][i];
  x = j;
  y = i;
  while (map[j])
    {
      i = 0;
      while (map[j][i])
	{
	  if (max < map[j][i])
	    {
	      max = map[j][i];
	      x = j;
	      y = i;
	    }
	  i++;
	}
      j++;
    }
  get_square(map, x, y, max);
}

char	get_min(char **map, int c, int j)
{
  char	min;

  if ((map[j + 1][c] - map[j + 1][c + 1]) > 0)
    min = map[j + 1][c + 1];
  else
    min = map[j + 1][c];
  if ((min - map[j][c + 1]) > 0)
    min = map[j][c + 1];
  return (min);
}

void	find_Square(char **map)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  replace_in_one(map);
  replace_in_zero(map);
  my_show_wordtab(map);
  my_putchar('\n');
  init_map(map);
  my_show_wordtab(map);
  my_putchar('\n');
  get_max(map, x, y);
  disp_map(map);
}

int		main(int ac, char **av)
{
  struct stat	fstat;
  char		**map;
  char		*buff;
  int		fd;
  int		i;

  stat(av[1], &fstat);
  if (check_arg(ac) == 84)
    return (84);
  else if ((buff = my_malloc(fstat.st_size + 1)) == NULL)
    return (84);
  else if ((fd = open(av[1], O_RDONLY)) == -1)
    {
      put_error("Invalid file\n");
      return (84);
    }
  else if ((i = read(fd, buff, fstat.st_size)) == 0)
    return (84);
  buff[i] = '\0';
  map = my_str_to_wordtab(buff);
  find_Square(map);
  close(fd);
  return (0);
}
