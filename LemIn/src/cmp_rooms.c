#include "my.h"

int	check_cmp(char **room1, char **room2)
{
  if (my_strcmp(room1[0], room2[0]) == 0)
    return (84);
  else if (my_strcmp(room1[1], room2[1]) == 0 &&
	   my_strcmp(room1[2], room2[2]) == 0)
    return (84);
  return (0);
}

int	cmp_rooms(char **room, int i)
{
  int	n;
  char	**room1;
  char	**room2;

  while (room[i])
    {
      room1 = NULL;
      n = 0;
      room1 = my_str_to_wordtab(room[i]);
      while (room[n])
	{
	  if (n == i)
	    n++;
	  else
	    {
	      room2 = NULL;
	      room2 = my_str_to_wordtab(room[n]);
	      if (check_cmp(room1, room2) == 84)
		return (84);
	      n++;
	    }
	}
      i++;
    }
  return (0);
}
