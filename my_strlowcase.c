#include "my.h"

char *my_strlowcase(char *str) {
	if (str != NULL) {
		for (int i = 0; str[i] != 0; i++) {
			if (str[i] >= 'A' && str[i] <= 'Z')
				my_putchar(str[i] + 32);
			else
				my_putchar(str[i]);
		}
	} else
		my_xerror("rb_strlowcase : String pointer is NULL");
	return (0);
}
