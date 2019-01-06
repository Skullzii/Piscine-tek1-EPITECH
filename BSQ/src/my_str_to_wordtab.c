#include "my.h"

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 1;
  if (tab != NULL)
    {
      if (tab != 0)
	{
	  while (tab[i])
	    {
	      my_putstr(tab[i]);
	      my_putchar('\n');
	      i++;
	    }
	}
    }
  return (0);
}

int	count_words(char *str)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	count++;
      i++;
    }
  return (count);
}

char	**my_str_to_wordtab(char *str)
{
  char	**result;
  int	i;
  int	count;
  int	j;

  i = 0;
  count = 0;
  j = 0;
  result = malloc (sizeof(char*) * (count_words(str)) + 1);
  while (str[i])
    {
      count = 0;
      while (str[i + count] != '\n' && str[i + count])
	count++;
      result[j] = malloc(sizeof(char) * count + 1);
      my_strncpy(result[j], &str[i], count);
      j++;
      i = i + count + 1;
    }
  result[j] = '\0';
  return (result);
}
