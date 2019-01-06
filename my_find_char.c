#include "my.h"

int my_find_char(char *str, char toCmp) {
	int i = 0;

	if (str != NULL) {
		while (str[i] != 0) {
			if (str[i] == toCmp)
				return (i);
			i++;
		}
	} else
		my_xerror("rb_find_char : str has a NULL value.");
	return (-1);
}
