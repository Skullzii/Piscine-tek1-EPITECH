#include "my.h"

int	check_match(int *matchsticks, int nb)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (i <= nb)
    {
      count = count + matchsticks[i];
      i++;
    }
  return (count);
}

void	ia_move(int nb, int line, int *matchsticks, int nbmax)
{
  if (nb <= nbmax && matchsticks[line - 1] >= nb)
    matchsticks[line - 1] = matchsticks[line - 1] - nb;
  my_putstr("AI removed ");
  my_put_nbr(nb);
  my_putstr(" match(es) from line ");
  my_put_nbr(line);
  my_putchar('\n');
}

int	move_game(int nb, int line, int *matchsticks)
{
  if (matchsticks[line - 1] >= nb)
    matchsticks[line - 1] = matchsticks[line - 1] - nb;
  else
    {
      my_putstr("Error: not enough matches on this line\n");
      return (84);
    }
  my_putstr("Player removed ");
  my_put_nbr(nb);
  my_putstr(" match(es) from line ");
  my_put_nbr(line);
  my_putchar('\n');
  return (0);
}

int	game(int *matchsticks, int nbmap, int nbalum, int i)
{
  while ((check_match(matchsticks, nbmap)) > 0)
    {
      print_game(matchsticks, nbmap);
      my_putstr("\nYour turn:\n");
      i = play(matchsticks, nbmap, nbalum);
      while (i == 84)
	i = play(matchsticks, nbmap, nbalum);
      if (i == 1)
	return (3);
      print_game(matchsticks, nbmap);
      if (check_match(matchsticks, nbmap) == 0)
	{
	  my_putstr("You lost, too bad...\n");
	  return (2);
	}
      ia_play(matchsticks, nbmap, nbalum);
    }
  if (check_match(matchsticks, nbmap) == 0)
    {
      print_game(matchsticks, nbmap);
      my_putstr("I lost... snif... but I'll get you next time!!\n");
      return (1);
    }
  return (0);
}
