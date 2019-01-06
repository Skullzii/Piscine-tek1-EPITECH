#include "my.h"

char *my_substr(char *str, int start, int nbChar) {
	char *str2;
	int i = 0;
	int n = start;

	if (str != NULL && start <= my_strlen(str) && start + nbChar <= my_strlen(str)) {
		str2 = my_malloc(nbChar + 1);
		while (i < nbChar) {
			str2[i] = str[n];
			i++;
			n++;
		}
		return (str2);
	}
	else if (str == NULL)
		my_xerror("rb_substr : str has a NULL value.");
	else if (start > my_strlen(str))
		my_xerror("rb_substr : start is longer than str lenght.");
	else if (start + nbChar > my_strlen(str))
		my_xerror("rb_substr : start + nbChar is longer than str lenght.");
	return (0);
}
