#include "my.h"

char *my_strdup(char *str) {
	char *str2;

	if (str != NULL) {
		str2 = my_malloc(my_strlen(str) + 1);
		my_strcpy(str2, str);
	} else
		my_xerror("rb_strdup : str has a NULL value;");
	return(str2);
}
