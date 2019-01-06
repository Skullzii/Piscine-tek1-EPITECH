#include "my.h"

void my_strset(char *ptr, int c, size_t n) {
	char *m = ptr;

	if (ptr != NULL) {
		for (int i = 0; i < n; i++)
			m[i] = (char)c;
	} else
		my_xerror("rb_strset : str has a NULL value.");
}
