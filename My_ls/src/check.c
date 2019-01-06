#include "my.h"

int	check_options(char *av)
{
  int	i;

  i = 1;
  while (av[i])
    {
      if (av[i] == 'l')
        list_rights_info();
      else if (av[i] == 'r')
        list_src();
      else if (av[i] == 'd')
        list_src();
      else if (av[i] == 'R')
        list_src();
      else if (av[i] == 't')
        list_src();
      else
        return (84);
      i++;
    }
  return (0);
}

int		check_flags(char **av, int ac)
{
  int		i;
  struct stat	files;

  i = 1;
  while (i < ac)
    {
      if (av[i][0] == '-' && check_options(av[i]) == 0)
        return (0);
      else if (av[i][0] == '-' && check_options(av[i]) == 84)
        return (84);
      else if (av[i][0] != '-')
	{
	  stat(av[i], &files);
	  if (S_ISDIR(files.st_mode) == 0)
	    list_file(av[i]);
	  else
	    list_directory(av[i]);
	}
      i++;
    }
  return (0);
}
