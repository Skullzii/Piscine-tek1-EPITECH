#include "my.h"

int my_find_char_with_offset(char *str, char toCmp, int offset) {
	int i;

	if (str != NULL && offset <= my_strlen(str)) {
		i = my_find_char(str + offset, toCmp);
		return (i + offset);
	}
	else if (str == NULL)
		my_xerror("rb_find_char_with_offset : str has a NULL value");
	else if (offset > my_strlen(str))
		my_xerror("rb_find_char_with_offset : offset is longer than str lenght.");
	return (-1);
}
