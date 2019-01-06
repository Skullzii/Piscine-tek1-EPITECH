#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_putstr(char *str)
{
  if (str != NULL)
    putstr(str);
  else
    put_error("my_putstr : String pointer is NULL");
}

int	my_len(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int	my_strlen(char *str)
{
  if (str != NULL)
    return (my_len(str));
  else
    put_error("my_strlen : String pointer is NULL");
  return (0);
}
