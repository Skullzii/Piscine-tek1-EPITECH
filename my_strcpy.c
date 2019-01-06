#include "my.h"

char *my_strcpy(char *dest, char *src) {
	int i;

	if (dest != NULL && src != NULL) {
		for (i = 0; src[i] != 0; i++)
			dest[i] = src[i];
		dest[i] = 0;
	}
	else if (dest == NULL)
		my_xerror("rb_strcpy : dest is a NULL pointer");
	else if (src == NULL)
		my_xerror("rb_strcpy : scr is a NULL pointer");
	return (dest);
}
