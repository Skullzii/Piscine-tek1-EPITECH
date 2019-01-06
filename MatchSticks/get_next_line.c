#include "my.h"

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

char		get_buff(const int fd)
{
  static char	buff[READ_SIZE];
  static int	rd = 0;
  static char	*str;
  static int	i = 0;
  char		c;

  if (rd == 0)
    {
      if ((rd = read(fd, buff, READ_SIZE)) == 0)
	return (0);
      i = 0;
      str = buff;
    }
  c = str[i];
  i++;
  rd--;
  return (c);
}

char	*get_next_line(const int fd)
{
  int	i;
  char	buff;
  char	*str;

  i = 0;
  str = my_malloc(READ_SIZE + 1);
  buff = get_buff(fd);
  while (buff != '\n')
    {
      if (buff == 0)
	return (NULL);
      str[i] = buff;
      str[i + 1] = '\0';
      if ((i % READ_SIZE) == 0)
	{
	  if ((str = my_realloc(str, i + READ_SIZE + 1)) == NULL)
	    return (NULL);
	}
      buff = get_buff(fd);
      i++;
    }
  str[i] = 0;
  return (str);
}
