#include "my.h"

void my_aff_params(int array_len, char **array) {
	if (array != NULL) {
		if (array_len > 1) {
			for (int i = 0; array[i]; i++) {
				my_putstr(array[i]);
				my_putchar('\n');
			}
		}
	} else
		my_xerror("rb_aff_params : av === NULL.");
}
