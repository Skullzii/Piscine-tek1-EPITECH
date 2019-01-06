#include "my.h"

void my_find_all_sub_word(char *str) {
	if (str != NULL) {
		for (int i = 0; str[i] != 0; i++) {
			if (str[i] != ' ')
				my_substr(str, i, i);
		}
	} else
		my_xerror("rb_find_all_sub_word : str has a NULL value.");
}
