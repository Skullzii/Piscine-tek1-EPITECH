#include "my.h"

char		get_buff(const int fd)
{
  static char	buff[2000];
  static int	rd = 0;
  static char	*str;
  static int	i = 0;
  char		c;

  if (rd == 0)
    {
      if ((rd = read(fd, buff, 2000)) == 0)
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
  str = my_malloc(2000 + 1);
  buff = get_buff(fd);
  if (buff == 0)
    return (NULL);
  while (buff != '\n' && buff != 0)
    {
      str[i] = buff;
      str[i + 1] = '\0';
      if ((i % 2000) == 0)
	{
	  if ((str = my_realloc(str, i + 2000 + 1)) == NULL)
	    return (NULL);
	}
      buff = get_buff(fd);
      i++;
    }
  str[i] = 0;
  return (str);
}
