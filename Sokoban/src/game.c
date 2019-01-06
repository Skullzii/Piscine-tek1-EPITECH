#include "my.h"

int	check_obj(char **map, int i, int j)
{
  if (map[i][j + 1] == '#' && map[i + 1][j] == '#')
    return (1);
  if (map[i][j + 1] == '#' && map[i - 1][j] == '#')
    return (1);
  if (map[i - 1][j] == '#' && map[i][j - 1] == '#')
    return (1);
  if (map[i][j - 1] == '#' && map[i + 1][j] == '#')
    return (1);
  return (0);
}

int	check_win(char **game_map, char **init_map)
{
  int	i;
  int	j;

  i = 0;
  while (game_map[i])
    {
      j = 0;
      while (game_map[i][j])
	{
	  if (init_map[i][j] == 'O' && game_map[i][j] != 'X')
	    return (0);
	  j++;
	}
      i++;
    }
  return (1);
}

int	check_loose(char **map, char **init_map)
{
  int	i;
  int	j;

  i = 0;
  while (map[i])
    {
      j = 0;
      while (map[i][j])
	{
	  if (map[i][j] == 'X' && init_map[i][j] != 'O')
	    {
	      if (check_obj(map, i, j))
		return (1);
	    }
	  j++;
	}
      i++;
    }
  return (0);
}

void	game(char **game_map, char **init_map)
{
  int	key;
  int	map_H;
  int	map_W;

  initscr();
  keypad(stdscr, TRUE);
  noecho();
  curs_set(0);
  get_map_size(init_map, &map_W, &map_H);
  while (!check_win(game_map, init_map) && !check_loose(game_map, init_map))
    {
      disp_map(game_map);
      key = getch();
      get_key(key, game_map, init_map);
    }
  disp_map(game_map);
  if (check_win(game_map, init_map))
    mvprintw(LINES/2 + map_H + 2, COLS/2 - map_W - 2, "VOUS AVEZ GAGNE !");
  else if (check_loose(game_map, init_map))
    mvprintw(LINES/2 + map_H + 2, COLS/2 - map_W - 2, "JEU BLOQUE !");
  key = getch();
  endwin();
}
