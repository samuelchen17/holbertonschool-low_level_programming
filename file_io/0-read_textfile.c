#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - read and print from file
 *
 * @filename: ptr to file
 * @letters: number of letters to read and print
 * Return: return actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t char_read, char_write;

/* check if args exist */
if (filename == NULL || letters == 0)
return (0);

/* open file */
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

/* allocate memory */
buffer = malloc(letters);
if (!buffer)
{
close(fd);
return (0);
}

char_read = read(fd, buffer, letters);
if (char_read == -1)
{
free(buffer);
close(fd);
return (0);
}

/* write to stdout */
char_write = write(STDOUT_FILENO, buffer, char_read);
free(buffer);
close(fd);

/* check if written == read */
if (char_write != char_read)
return (0);

return (char_write);
}
