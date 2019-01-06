#include "my.h"

int		my_getnbr(char *str)
{
  unsigned int	n;
  int		nb;
  int		i;

  i = 0;
  nb = 1;
  n = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	nb = - nb;
      i = i + 1;
    }
  while (str[i] != 0 && (str[i] >= 48 && str[i] <= 57))
    {
      n = n * 10 + (str[i] - 48);
      if ((nb == -1 && (n - 1) > INT_MAX) || (nb == 1 && n > INT_MAX))
	return (0);
      i = i + 1;
    }
  if (nb == -1)
    n = - n;
  return (n);
}
