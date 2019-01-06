#include "my.h"

int count_words(char *str) {
	int i, n = 0;

	if (str != NULL) {
		while (str[i] != 0) {
			while (str[i] == ' ' && str[i] != '\0')
				i++;
			n++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			if (str[i] == ' ' && str[i + 1] == '\0')
				n--;
		}
		return (n);
	} else
		my_xerror("count_words : String pointer is NULL");
	return (0);
}
