#include "my.h"

int	solve_maze(int x, int y, t_list *list)
{
  list->maze[y][x] = 'o';
  if (x == list->x - 1 && y == list->y - 1)
    return (0);
  else if (x + 1 < list->x && list->maze[y][x + 1] == '*')
    if (solve_maze(x + 1, y, list) == 0)
      return (0);
  if (y + 1 < list->y && list->maze[y + 1][x] == '*')
    if (solve_maze(x, y + 1, list) == 0)
      return (0);
  if (x - 1 >= 0 && list->maze[y][x - 1] == '*')
    if (solve_maze(x - 1, y, list) == 0)
      return (0);
  if (y - 1 >= 0 && list->maze[y - 1][x] == '*')
    if (solve_maze(x, y - 1, list) == 0)
      return (0);
  list->maze[y][x] = 'a';
  return (84);
}
