#include "my.h"

int my_strcmp(char *str1, char *str2) {
	int i;
	int j;

	if (str1 != NULL && str2 != NULL) {
		while (str1[i] != 0 && str2[i] != 0) {
			if (str1[i] != str2[i]) {
				j = str1[i] - str2[i];
				i++;
				return (j);
			} else
				i++;
		}
	} else
		my_xerror("rb_strcmp : String pointer is NULL");
	return (0);
}
