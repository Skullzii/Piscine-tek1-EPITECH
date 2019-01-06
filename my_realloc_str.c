#include "my.h"

char *my_realloc_str(char *str, size_t s) {
	size_t i;
	char *str2;

	if (str != NULL) {
		i = my_strlen(str);
		if (s > i) {
			str2 = malloc(s);
			my_strcpy(str2, str);
			return (str2);
		} else
			my_xerror("rb_realloc_str : s value is too short");	
	} else
		str = my_malloc(s);
	return (str);
}
