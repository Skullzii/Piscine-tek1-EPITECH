#include "my.h"

char *my_strcat(char *dest, char *src) {
	if (dest != NULL && src != NULL)
		my_strcpy(dest + my_strlen(dest), src);
	else if (dest == NULL)
		my_xerror("rb_strcat : dest has a NULL value");
	else if (src == NULL)
		my_xerror("rb_strcat : src has a NULL value");
	return (dest);
}
