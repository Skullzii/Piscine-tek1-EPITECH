#include "my.h"

void	check_wall(args *stock, int i, int count)
{
  if (i - 1 >= 0 && stock->maze[i - 1][count] == 'X')
    stock->up_check = 1;
  if (count - 1 >= 0 && stock->maze[i][count - 1] == 'X')
    stock->left_check = 1;
}

void	set_cell(args *stock, int i, int count)
{
  int	n;

  n = rand() % 2;
  if (stock->up_check == 1 && stock->left_check == 1)
    {
      if (count - 1 >= 0 && n == 1)
	stock->maze[i][count - 1] = '*';
      else if (i - 1 >= 0 && n == 0)
	stock->maze[i - 1][count] = '*';
    }
  else
    {
      if (i - 1 >= 0 && stock->up_check == 1 && stock->left_check == 0)
	stock->maze[i - 1][count] = '*';
      if (count - 1 >= 0 && stock->up_check == 0 && stock->left_check == 1)
	stock->maze[i][count - 1] = '*';
    }
}

void	gen_perfect_maze(args *stock)
{
  int	i;
  int	count;

  i = 0;
  init_maze(stock);
  while (i < stock->y)
    {
      stock->up_check = 0;
      stock->left_check = 0;
      count = 0;
      while (count < stock->x)
	{
	  if (i == 0)
	    stock->maze[i][count] = '*';
	  check_wall(stock, i, count);
	  set_cell(stock, i, count);
	  count = count + 2;
	}
      i++;
    }
}

void	gen_imperfect_maze(args *stock)
{
  int	i;
  int	count;

  i = 0;
  if ((stock->maze = malloc(sizeof(char *) * (stock->y + 1))) == NULL)
    my_puterror("Malloc failled");
  while (i < stock->y)
    {
      if ((stock->maze[i] = malloc(sizeof(char *) * stock->x + 1)) == NULL)
	my_puterror("Malloc failled");
      count = 0;
      while (count < stock->x)
	{
	  stock->maze[i][count] = random_gen();
	  count++;
	}
      stock->maze[i][count] = 0;
      stock->maze[i][count - 1] = '*';
      i++;
    }
  stock->maze[0][0] = '*';
  stock->maze[i] = 0;
}

void	generator(args *stock)
{
  if (strcmp(stock->generation, "perfect") == 0)
    gen_perfect_maze(stock);
  else
    gen_imperfect_maze(stock);
}
