#include "../include/my.h"

void		list_rights_info()
{
  DIR		*dirp;
  struct dirent	*entry;

  if (!(dirp = opendir(".")))
    exit(EXIT_FAILURE);
  while ((entry = readdir(dirp)) != NULL)
    {
      if (entry->d_name[0] != '.')
        {
	  print_info(entry);
	  my_putstr(entry->d_name);
          my_putchar('\n');
        }
    }
  closedir(dirp);
  exit(EXIT_SUCCESS);
}

void		list_src()
{
  DIR		*dirp;
  struct dirent	*entry;

  if (!(dirp = opendir(".")))
    exit(EXIT_FAILURE);
  while ((entry = readdir(dirp)) != NULL)
    {
      if (entry->d_name[0] != '.')
        {
          my_putstr(entry->d_name);
          my_putchar('\n');
        }
    }
  closedir(dirp);
  exit(EXIT_SUCCESS);
}

int		list_file(char *av)
{
  struct stat	files;

  if (stat(av, &files) == 0)
    {
      my_putstr(av);
      my_putchar('\n');
    }
  else
    {
      put_error("my_ls: cannot access: No such file or directory");
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}

int		list_directory(char *av)
{
  DIR		*dirp;
  struct dirent	*entry;
  if (!(dirp = opendir(av)))
    {
      put_error("my_ls: cannot access: No such file or directory");
      return (EXIT_FAILURE);
    }
  while ((entry = readdir(dirp)) != NULL)
    {
      if (entry->d_name[0] != '.')
	{
	  my_putstr(entry->d_name);
	  my_putchar('\n');
	}
    }
  closedir(dirp);
  return (EXIT_SUCCESS);
}
