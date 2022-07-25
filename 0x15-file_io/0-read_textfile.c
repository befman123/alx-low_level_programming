#include "main.h"
#include <unistd.h>
/*
 *Reads a text file and prints it to the standard output
 */ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, tmp, i;
	char *buf;

	fd = open(filename, O_WRONLY);
	if (fd != -1)
	{
		tmp = read(fd, buf, letters);
		if (tmp != -1)
			write(STDOUT_FILENO,buf,tmp);
	}
	return (tmp);
}
