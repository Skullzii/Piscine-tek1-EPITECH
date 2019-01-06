#include "my.h"

int		get_size(char *str)
{
  FILE		*stream;
  char		*line;
  size_t	len;
  ssize_t	read;
  int		size;

  line = NULL;
  len = 0;
  if ((stream = fopen(str, "r")) == NULL)
    return (84);
  if (stream == NULL)
    return (84);
  size = 0;
  while ((read = getline(&line, &len, stream)) != -1)
    size = size + read;
  free(line);
  return (size);
}

char	*read_file(char *file, int size)
{
  int	i;
  int	fd;
  char	*map;

  i = 0;
  if ((map = my_malloc(size)) == NULL)
    return (NULL);
  if ((fd = open(file, O_RDONLY)) == -1)
    return (NULL);
  i = read(fd, map, size);
  map[i] = '\n';
  map[i + 1] = '\0';
  return (map);
}

char	*get_map(char *av)
{
  char	*buff;
  int	size;

  if ((size = get_size(av)) == 84)
    return (NULL);
  if ((buff = read_file(av, size)) == NULL)
    return (NULL);
  return (buff);
}

int	count(char **map, char c)
{
  int	i;
  int	j;
  int	count;

  i = 0;
  count = 0;
  while (map[i])
    {
      j = 0;
      while (map[i][j])
	{
	  if (map[i][j] == c)
	    count++;
	  j++;
	}
      i++;
    }
  check_count(map, count);
  return (count);
}

int	main(int ac, char **av)
{
  char	**init_map;
  char	**game_map;
  char	*buff;

  if (ac != 2)
    put_error("Usage: ./my_sokoban map.txt");
  else if ((buff = get_map(av[1])) == NULL)
    return (84);
  init_map = my_str_to_wordtab(buff);
  game_map = my_str_to_wordtab(buff);
  count(game_map, 'X');
  game(game_map, init_map);
  return (0);
}
