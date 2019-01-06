#include "my.h"

void	my_print_err(char *str)
{
  write (2, str, my_strlen(str));
}

void	my_puterror(char *str)
{
  my_print_err("Error : ");
  my_print_err(str);
  my_print_err("\n");
  exit(84);
}
