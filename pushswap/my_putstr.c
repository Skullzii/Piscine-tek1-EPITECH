#include "my.h"

void print(char *str) {
	for (int i = 0; str[i]; i++)
		my_putchar(str[i]);
}

void my_putstr(char *str) {
	if (str != NULL)
		print(str);
}
