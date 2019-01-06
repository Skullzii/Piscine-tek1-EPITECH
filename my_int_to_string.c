#include "my.h"

int count_digit(int nbr) {
	int n = 0;
	
	while (nbr != 0) {
		n++;
		nbr /= 10;
	}
	return (n);
}

char *my_int_to_string(int nb) {
	char *str = my_malloc(count_digit(nb));
	int i, n = 0;
	
	if (nb > 0)
		nb = nb * -1;
	else if (nb < 0) {
		str[n] = ('-');
		n++;
	}
	while (nb / i < -9)
		i = i * 10;
	while (i >= 1) {
		str[n] = (nb / i * -1 + 48);
		nb = nb % i;
		i = i / 10;
		n++;
	}
	return (str);
}
