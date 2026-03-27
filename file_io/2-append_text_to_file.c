#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - append text to end of file
 *
 * @filename: file to append
 * @text_content: null terminated string to append to file
 * Return: return 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t char_write = 0;
ssize_t i = 0;

/* check if filename exists */
if (filename == NULL)
return (-1);

/* open file with flags and permissions */
fd = open(filename, O_WRONLY | O_APPEND);
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
