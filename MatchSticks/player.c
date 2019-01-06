#include "my.h"

int	get_line(int *matchsticks, int nb, int nbmap)
{
  int	i;

  i = 0;
  while (i <= nbmap - 1)
    {
      if (matchsticks[i] >= nb)
	return (i + 1);
      else
	i++;
    }
  return (0);
}

int	ia_play(int *matchsticks, int nbmap, int nbalum)
{
  int	line;

  my_putstr("\nAI's turn...\n");
  line = get_line(matchsticks, 1, nbmap);
  ia_move(1, line, matchsticks, nbalum);
  return (0);
}

int	play(int *matchsticks, int nbmap, int nbalum)
{
  char	*nb;
  char	*line;

  my_putstr("Line: ");
  if ((line = get_next_line(0)) == NULL)
    return (1);
  if (check_char(line) == 84)
    return (84);
  if (check_line(nbmap, my_getnbr(line)) == 84)
    return (84);
  my_putstr("Matches: ");
  if ((nb = get_next_line(0)) == NULL)
    return (1);
  if (check_char(nb) == 84)
    return (84);
  if (check_nbalum(nbalum, my_getnbr(nb)) == 84)
    return (84);
  if (move_game(my_getnbr(nb), my_getnbr(line), matchsticks) == 84)
    return (84);
  return (0);
}
