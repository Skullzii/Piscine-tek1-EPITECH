#include "get_next_line.h"

void *my_malloc(size_t s) {
	char *m;

	if (s != 0) {
		m = malloc (s);
		if (m == NULL)
			return (NULL);
	}
	else
		return (NULL);
	return (m);
}

char *get_next_line(const int fd) {
	static char buff[READ_SIZE];
	static int i = 0;
	int n, rd = 0;
	char *save = NULL;

	if (fd == -1)
		return (NULL);
	rd = read(fd, buff, READ_SIZE);
	buff[rd] = '\0';
	if (buff[i] != 0 && i <= READ_SIZE) {
		save = my_malloc(READ_SIZE);
		while (buff[i] != '\n' && buff[i])
			save[n++] = buff[i++];
		if (buff[i] != 0)
			i++;
	}
	return (save);
}
