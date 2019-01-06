#include "my.h"

char	random_gen()
{
  int	c;

  c = rand() % 10;
  if (c == 0 || c == 4 || c == 8)
    return ('X');
  return ('*');
}
