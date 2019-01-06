#include "my.h"

void my_xerror(char *str) {
	my_print_err("Error : ");
	my_print_err(str);
	my_print_err("\n");
	exit(-1);
}
