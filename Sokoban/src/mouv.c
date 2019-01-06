#include "my.h"

void	move_left(int x, int y, char **game_map, char **init_map)
{
  if (y > 0 && game_map[x][y - 1] != '#')
    {
      if (game_map[x][y - 1] == 'X')
	{
	  if (game_map[x][y - 2] != '#' && game_map[x][y - 2] != 'X')
	    {
	      game_map[x][y - 1] = 'P';
	      if (init_map[x][y] == 'O')
		game_map[x][y] = 'O';
	      else
		game_map[x][y] = ' ';
	      game_map[x][y - 2] = 'X';
	    }
	}
      else
	{
	  game_map[x][y - 1] = 'P';
	  if (init_map[x][y] == 'O')
	    game_map[x][y] = 'O';
	  else
	    game_map[x][y] = ' ';
	}
    }
}

void	move_right(int x, int y, char **game_map, char **init_map)
{
  if (game_map[x][y + 1] != '#')
    {
      if (game_map[x][y + 1] == 'X')
	{
	  if (game_map[x][y + 2] != '#' && game_map[x][y + 2] != 'X')
	    {
	      game_map[x][y + 1] = 'P';
	      if (init_map[x][y] == 'O')
		game_map[x][y] = 'O';
	      else
		game_map[x][y] = ' ';
	      game_map[x][y + 2] = 'X';
	    }
	}
      else
	{
	  game_map[x][y + 1] = 'P';
	  if (init_map[x][y] == 'O')
	    game_map[x][y] = 'O';
	  else
	    game_map[x][y] = ' ';
	}
    }
}

void	move_bottom(int x, int y, char **game_map, char **init_map)
{
  if (game_map[x + 1][y] != '#')
    {
      if (game_map[x + 1][y] == 'X')
	{
	  if (game_map[x + 2][y] != '#' &&
	      game_map[x + 2][y] != 'X')
	    {
	      game_map[x + 1][y] = 'P';
	      if (init_map[x][y] == 'O')
		game_map[x][y] = 'O';
	      else
		game_map[x][y] = ' ';
	      game_map[x + 2][y] = 'X';
	    }
	}
      else
	{
	  game_map[x + 1][y] = 'P';
	  if (init_map[x][y] == 'O')
	    game_map[x][y] = 'O';
	  else
	    game_map[x][y] = ' ';
	}
    }
}

void	move_top(int x, int y, char **game_map, char **init_map)
{
  if (game_map[x - 1][y] != '#')
    {
      if (game_map[x - 1][y] == 'X')
	{
	  if (game_map[x - 2][y] != '#' && game_map[x - 2][y] != 'X')
	    {
	      game_map[x - 1][y] = 'P';
	      if (init_map[x][y] == 'O')
		game_map[x][y] = 'O';
	      else
		game_map[x][y] = ' ';
	      game_map[x - 2][y] = 'X';
	    }
	}
      else
	{
	  game_map[x - 1][y] = 'P';
	  if (init_map[x][y] == 'O')
	    game_map[x][y] = 'O';
	  else
	    game_map[x][y] = ' ';
	}
    }
}
