#include "my.h"

char	*my_strcat(char *dest, char *src)
{
  if (dest == NULL)
    return (NULL);
  else if (src == NULL)
    return (NULL);
  else if (dest != NULL || src != NULL)
    my_strcpy(dest + my_strlen(dest), src);
  return (dest);
}
