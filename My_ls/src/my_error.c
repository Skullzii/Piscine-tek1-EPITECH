#include "my.h"

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
