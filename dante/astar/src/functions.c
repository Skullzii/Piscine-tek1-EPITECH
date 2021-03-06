#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void	*my_malloc(size_t s)
{
  char	*m;

  if (s != 0)
    {
      m = malloc(s);
      if (m == NULL)
	return (NULL);
    }
  else
    return (NULL);
  return (m);
}

char		*my_realloc(char *str, size_t size)
{
  char		*res;
  size_t	i;

  i = 0;
  if ((res = my_malloc(size + 1)) == NULL)
    return (NULL);
  while (str[i])
    {
      res[i] = str[i];
      i++;
    }
  return (res);
}
