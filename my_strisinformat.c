#include "my.h"

int my_strisinformat(char *str, char *format) {
	int i, n = 0;

	if (str != NULL) {
		while (format[i] != 0 && str[n] != 0) {
			if (str[n] == format[i]) {
				n++;
				i = 0;
				return (1);
			} else
				i++;
		}
	} else
		my_xerror("rb_strisinformat : String pointer is NULL");
	return (0);
}
