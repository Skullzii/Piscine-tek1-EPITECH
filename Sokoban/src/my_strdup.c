#include "my.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  if (dest != NULL && src != NULL)
    {
      while (src[i] != 0)
	{
	  dest[i] = src[i];
	  i++;
	}
      dest[i] = 0;
    }
  else if (dest == NULL)
    put_error("dest is a NULL pointer");
  else if (src == NULL)
    put_error("scr is a NULL pointer");
  return (dest);
}

char	*my_strdup(char *src)
{
  char	*str2;

  if (src != NULL)
    {
      str2 = my_malloc(my_strlen(src) + 1);
      my_strcpy(str2, src);
    }
  else
    put_error("strdup : str has a NULL value;");
  return (str2);
}
