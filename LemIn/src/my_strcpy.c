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
    return (NULL);
  else if (src == NULL)
    return (NULL);
  return (dest);
}
