#include "my.h"

void *my_malloc(size_t s) {
	char *m;

	if (s != 0) {
		m = malloc (s);
		if (m == NULL)
			my_xerror("rb_malloc : Pointer is NULL");
	} else
		my_xerror("rb_malloc : Can't allocate 0 bytes");
	return (m);
}
