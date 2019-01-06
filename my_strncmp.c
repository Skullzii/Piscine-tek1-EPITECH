#include "my.h"

int my_strncmp(char *str1, char *str2, int n) {
	int i, j = 0;

	if (str1 != NULL && str2 != NULL) {
		while (i < n) {
			if (str1[i] != str2[i]) {
				j = str1[i] - str2[i];
				i++;
				return (j);
			} else
				i++;
		}
		return (j);
	} else
		my_xerror("rb_strcmp : String pointer is NULL");
	return (0);
}
