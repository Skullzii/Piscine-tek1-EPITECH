#include "my.h"

void	get_file(char *str, t_list *list)
{
  int	x;
  int	i;
  int	fd;
  char	*line;

  i = 0;
  x = 0;
  init_maze(list, str);
  if ((fd = open(str, O_RDONLY)) == -1)
    my_puterror("Open file failed");
  while ((line = get_next_line(fd)) != NULL)
    {
      list->maze[i] = line;
      i++;
    }
  list->y = i;
  while (list->maze[i - 1][x])
    x++;
  list->x = x;
  list->maze[i] = 0;
  free(line);
  close(fd);
}
