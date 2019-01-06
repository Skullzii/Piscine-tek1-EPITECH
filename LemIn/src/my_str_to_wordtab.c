#include "my.h"

int	check_c(char c)
{
  if (c >= 33 && c <= 126)
    return (1);
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
      if (check_c(str[i]) == 1 && check_c(str[i + 1]) == 0)
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
      if (check_c(str[i]) == 0)
	i++;
      else if (check_c(str[i]) == 1)
	{
	  count = 0;
	  while (check_c(str[i + count]) == 1)
	    count++;
	  result[j] = malloc(count + 1);
	  my_strncpy(result[j], &str[i], count);
	  j++;
	  i = i + count;
	}
    }
  return (result);
}
