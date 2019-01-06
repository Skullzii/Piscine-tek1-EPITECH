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
  exit(84);
}

void	check_count(char **map, int count)
{
  int	i;
  int	j;
  int	check;

  i = 0;
  check = 0;
  if (count == 0)
    put_error("Map incorecte");
  while (map[i])
    {
      j = 0;
      while (map[i][j])
	{
	  if (map[i][j] == 'O')
	    check++;
	  j++;
	}
      i++;
    }
  if (count != check)
    put_error("Map incorecte");
}
