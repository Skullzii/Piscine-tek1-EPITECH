#include "my.h"

char	*check_tcoord(char *str)
{
  char	**check;
  int	i;
  int	count;

  i = 0;
  check = my_str_to_wordtab(str);
  while (check[i] && check[i] != NULL)
    i++;
  if (i != 1)
    if (check[1][0] != '#')
      return (NULL);
  i = 0;
  count = 0;
  while (check[0][i])
    {
      if (check[0][i] == '-')
	count++;
      i++;
    }
  if (count != 1)
    return (NULL);
  return (check[0]);
}

char	*check_rcoord(char *str)
{
  char	**check;
  int	len;
  char	*res;

  len = 0;
  check = my_str_to_wordtab(str);
  while (check[len])
    len++;
  if (len < 3)
    return (NULL);
  else if (len > 3)
    if (check[3][0] != '#')
      return (NULL);
  if (strisnum(check[1]) != 0 ||
      strisnum(check[2]) != 0)
    return (NULL);
  len = my_strlen(check[0]) + my_strlen(check[1]) + my_strlen(check[2]);
  res = malloc(sizeof(char) * len + 3);
  my_strcpy(res, check[0]);
  my_strcat(res, " ");
  my_strcat(res, check[1]);
  my_strcat(res, " ");
  my_strcat(res, check[2]);
  return (res);
}

int	cmp_check(char **room, char **room1, int i)
{
  char	**room2;

  while (i >= 0)
    {
      room2 = NULL;
      room2 = my_str_to_wordtab(room[i]);
      if (check_cmp(room1, room2) == 84)
	return (84);
      i--;
    }
  return (0);
}

int	check_rooms(char **room)
{
  int	i;
  char	**room1;
  int	count;

  i = 0;
  count = 0;
  if (room == NULL)
    return (84);
  while (room[i])
    {
      room1 = NULL;
      room1 = my_str_to_wordtab(room[i]);
      if (cmp_check(room, room1, i - 1) == 84)
	i++;
      else if (my_strcmp(room[i], "##start") == 0 ||
	       my_strcmp(room[i], "##end") == 0)
	{
	  my_display(room[i]);
	  count++;
	  i++;
	}
      else if ((room[i] = check_rcoord(room[i])) == NULL)
	return (84);
      else
	{
	  my_display(room[i]);
	  i++;
	}
    }
  if (count != 2)
    return (84);
  return (0);
}

int	check_map(save *map)
{
  if (check_anths(map->anths) == 84)
    return (84);
  return (0);
}
