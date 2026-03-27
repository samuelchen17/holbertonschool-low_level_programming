#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file and write text_content to it
 *
 * @filename: file to create
 * @text_content: null terminated string to write to file
 * Return: return 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t char_write = 0;
ssize_t i = 0;

/* check if filename exists */
if (filename == NULL)
return (-1);

/* open file with flags and permissions */
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
/* get len of text_content */
while (text_content[i])
i++;

char_write = write(fd, text_content, i);
if (char_write != i)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
