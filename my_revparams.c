#include "my.h"

char **my_revparams(char **array) {
	if (array != NULL) {
		for (int i = 0;(my_strarraylen(array) - i) != 0; i++) {
			array[i] = (array[my_strarraylen(array) - i - 1]);
			my_putchar('\n');
		}
	} else
		my_xerror("rb_revparams : NULL pointer given.");
	return (0);
}
