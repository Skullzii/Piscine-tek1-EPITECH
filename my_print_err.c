#include "my.h"

void my_print_err(char *str)
{
	write(2, str, my_strlen(str));
}
