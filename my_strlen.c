#include "my.h"

int my_strlen(char *str) {
	int i;

	if (str != NULL) {
		for (i = 0; str[i]; i++);
		return (i);
	}
	else
		my_xerror("rb_strlen : String pointer is NULL");
	return (0);
}
