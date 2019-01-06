#include "my.h"

int	check_arg(int ac)
{
  if (ac != 2)
    {
      put_error("./bsq map");
      return (84);
    }
  return (0);
}

void	print_err(char *str)
{
  write (2, str, my_strlen(str));
}

void	put_error(char *str)
{
  print_err("Error : ");
  print_err(str);
  print_err("\n");
}
