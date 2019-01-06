#include "my.h"

void	*my_malloc(size_t s)
{
  char	*m;

  if (s != 0)
    {
      m = malloc(s);
      if (m == NULL)
	put_error("malloc : Pointer is NULL");
    }
  else
    put_error("malloc : Can't allocate 0 bytes");
  return (m);
}

void	my_free(void *ptr)
{
  if (ptr != NULL)
    free(ptr);
  else
    put_error("free : Can't free NULL pointer");
}
