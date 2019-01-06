#include "my.h"

int		main(int ac, char **av)
{
  t_list	list;
  int		startx;
  int		starty;

  startx = 0;
  starty = 0;
  if (ac != 2)
    my_puterror("Wrong numbers of arguments");
  get_file(av[1], &list);
  if (solve_maze(startx, starty, &list) == 84)
    {
      printf("%s\n", "no solution found");
      return (0);
    }
  display_maze(list.maze);
  free_list(list.maze);
  return (0);
}
