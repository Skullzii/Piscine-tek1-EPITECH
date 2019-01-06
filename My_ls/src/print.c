#include "my.h"

void		print_rights(struct dirent *entry)
{
  struct stat	info;

  if (stat(entry->d_name, &info) < 0)
    {
      put_error("my_ls: cannot access: No such file or directory");
      exit(EXIT_FAILURE);
    }
  else
    {
      my_putstr((S_ISDIR(info.st_mode)) ? "d" : "-");
      my_putstr((info.st_mode & S_IRUSR) ? "r" : "-");
      my_putstr((info.st_mode & S_IWUSR) ? "w" : "-");
      my_putstr((info.st_mode & S_IXUSR) ? "x" : "-");
      my_putstr((info.st_mode & S_IRGRP) ? "r" : "-");
      my_putstr((info.st_mode & S_IWGRP) ? "w" : "-");
      my_putstr((info.st_mode & S_IXGRP) ? "x" : "-");
      my_putstr((info.st_mode & S_IROTH) ? "r" : "-");
      my_putstr((info.st_mode & S_IWOTH) ? "w" : "-");
      my_putstr((info.st_mode & S_IXOTH) ? "x" : "-");
    }
}

void		print_name(struct dirent *entry)
{
  struct group	*grp;
  struct passwd	*pwd;
  struct stat	info;

  stat(entry->d_name, &info);
  pwd = getpwuid(info.st_uid);
  grp = getgrgid(info.st_gid);
  my_putstr(pwd->pw_name);
  my_putchar(' ');
  my_putstr(grp->gr_name);
}

void		print_time(struct dirent *entry)
{
  struct stat	info;
  char		*time;
  int		i;

  i = 0;
  stat(entry->d_name, &info);
  time = ctime(&(info.st_mtime));
  while (time[i])
    i++;
  time[i - 9] = 0;
  my_putstr(time);
}

void		print_info(struct dirent *entry)
{
  struct stat	info;

  stat(entry->d_name, &info);
  print_rights(entry);
  my_putchar(' ');
  my_put_nbr(info.st_nlink);
  my_putchar(' ');
  print_name(entry);
  my_putchar(' ');
  my_put_nbr(info.st_size);
  my_putchar(' ');
  print_time(entry);
  my_putchar(' ');
}
