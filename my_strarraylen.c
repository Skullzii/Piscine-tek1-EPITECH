#include "my.h"

int my_strarraylen(char **array) {
	int i = 0;
	
	if (array != NULL) {
		while (array[i])
			i++;
		return (i);
	} else
		my_xerror("rb_strarraylen : NULL pointer given.");
	return (1);
}
