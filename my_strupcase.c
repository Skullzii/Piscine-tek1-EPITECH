#include "my.h"

char *my_strupcase(char *str) {
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			my_putchar(str[i] - 32);
		else
			my_putchar(str[i]);
	}
	return (0);
}
