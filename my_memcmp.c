#include "my.h"

int my_memcmp(void *str1, void *str2, size_t n) {
	size_t i = 0;
	int j = 0;
	char *s1 = str1;
	char *s2 = str2;

	if (str1 != NULL && str2 != NULL) {
		while (i < n) {
			if (s1[i] != s2[i]) {
				j = s1[i] - s2[i];
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
