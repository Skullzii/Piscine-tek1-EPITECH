#ifndef MY_H_
#define MY_H_

#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

void	my_putchar(char c);
void	my_putstr(char *str);
void	putstr(char *str);
void	put_error(char *str);
void	print_err(char *str);
void	list_src();
void	list_rights_info();
void	print_rights(struct dirent *entry);
void	print_name(struct dirent *entry);
void	print_info(struct dirent *entry);
int	my_put_nbr(int nb);
int	list_file(char *av);
int	list_directory(char *av);
int	my_strlen(char *str);
int	my_len(char *str);
int	check_flags(char **av, int ac);
int	check_options(char *av);

#endif
