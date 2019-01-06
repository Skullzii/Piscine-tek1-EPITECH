#include "my.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  if (n <= 0)
    return (0);
  if (dest != NULL && src != NULL)
    {
      while (i < n && src[i])
	{
	  dest[i] = src[i];
	  i++;
	}
      if (i == n)
	dest[i] = '\0';
    }
  else if (dest == NULL)
    return (0);
  else if (src == NULL)
    return (0);
  return (dest);
}
