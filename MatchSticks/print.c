#include "my.h"

void	print_space(int j, int nb, int c)
{
  while (j < ((nb - c) / 2))
    {
      my_putstr(" ");
      j++;
    }
}

void	print_matches(int j, int c, int n)
{
  while (j < c - n)
    {
      my_putstr(" ");
      j++;
    }
}

void	match(int n, int nb, int line)
{
  int	i;
  int	j;
  int	c;

  i = 0;
  j = 0;
  my_putstr("*");
  c = 1 + line * 2;
  print_space(j, nb, c);
  while (i < n)
    {
      my_putstr("|");
      i++;
    }
  j = 0;
  if (c > n)
    print_matches(j, c, n);
  j = 0;
  print_space(j, nb, c);
  my_putstr("*\n");
}

void	print_game(int *line, int nb)
{
  int	i;
  int	n;

  n = 0;
  i = 0;
  while (n < (1 + nb * 2))
    {
      my_putstr("*");
      n++;
    }
  my_putchar('\n');
  while (i < nb)
    {
      match(line[i], nb * 2, i);
      i++;
    }
  n = 0;
  while (n < (1 + nb * 2))
    {
      my_putstr("*");
      n++;
    }
  my_putchar('\n');
}
