#include "my.h"

void my_put_nbr(int nb) {
	int i = 1;
	unsigned int n = nb;

	if (nb < 0) {
		my_putchar('-');
		n = n * - 1;
	}
	while ((n / i) >= 10)
		i = i * 10;
	while (i > 0) {
		my_putchar((n / i) % 10 + 48);
		i = i / 10;
	}
}
