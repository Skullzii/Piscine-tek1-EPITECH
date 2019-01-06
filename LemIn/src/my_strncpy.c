#include "my.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  if (n <= 0)
    return (NULL);
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
    return (NULL);
  else if (src == NULL)
    return (NULL);
  return (dest);
}
