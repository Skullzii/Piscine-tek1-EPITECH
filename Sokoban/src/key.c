#include "my.h"

void	get_key(int key, char **game_map, char **init_map)
{
  int	x;
  int	y;

  get_sokoban(game_map, &x, &y);
  if (key == KEY_UP)
    move_top(x, y, game_map, init_map);
  else if (key == KEY_DOWN)
    move_bottom(x, y, game_map, init_map);
  else if (key == KEY_LEFT)
    move_left(x, y, game_map, init_map);
  else if (key == KEY_RIGHT)
    move_right(x, y, game_map, init_map);
}
