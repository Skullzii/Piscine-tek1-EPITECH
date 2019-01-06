#include "my.h"

void my_free(void *ptr) {
	if (ptr != NULL)
		free(ptr);
	else
		my_xerror("rb_free : Can't free NULL pointer");
}
