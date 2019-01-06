#include "my.h"

int	main(int ac, char **av)
{
  if (ac == 1)
    list_src();
  else
    {
      if (check_flags(av, ac) == 0)
	return (0);
      else if (check_flags(av, ac) == 84)
	{
	  put_error("ls: invalid option");
	  return (EXIT_FAILURE);
	}
    }
  return (0);
}
