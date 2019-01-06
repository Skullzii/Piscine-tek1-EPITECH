#include "my.h"

void	init_maze(t_list *list, char *str)
{
  int	fd;
  int	count;
  char	*line;

  count = 0;
  if ((fd = open(str, O_RDONLY)) == -1)
    my_puterror("Open file failed");
  while ((line = get_next_line(fd)) != NULL)
    count++;
  if ((list->maze = malloc(sizeof(char *) * (count + 1))) == NULL)
    my_puterror("Malloc failled");
  free(line);
  close(fd);
}
