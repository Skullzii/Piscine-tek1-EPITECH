#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_
# ifndef READ_SIZE
# define READ_SIZE (1080)
# endif

#include <unistd.h>
#include <stdlib.h>

void *my_malloc(size_t s);
char *get_next_line(const int fd);

#endif
