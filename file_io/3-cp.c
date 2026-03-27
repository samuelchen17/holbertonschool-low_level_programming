#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * close_fd - close fd or exit on failure
 *
 * @fd: file descriptor to close
 */

void close_fd(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * copy_fd - copy fd from src to dst, exit on failure
 * @fd_from: src file descriptor
 * @fd_to: dst file descriptor
 * @file_from: scr file
 * @file_to: dst file
 */

void copy_fd(int fd_from, int fd_to, char *file_from, char *file_to)
{
char buffer[1024];
ssize_t c_write, c_read;

/* copy from src to dst in 1024 chunks */
while ((c_read = read(fd_from, buffer, 1024)) > 0)
{
c_write = write(fd_to, buffer, c_read);
if (c_write != c_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close_fd(fd_from);
close_fd(fd_to);
exit(99);
}
}

if (c_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
close_fd(fd_from);
close_fd(fd_to);
exit(98);
}
}


/**
 * main - copies data from src file to dst file
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 on success, exit on failure
 */

int main(int argc, char *argv[])
{
char *file_from, *file_to;
int fd_from, fd_to;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = argv[1];
file_to = argv[2];

/* open src file in read only */
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
/* open dst file for write, truncate if file exists, else create */
fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
close_fd(fd_from);
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}

copy_fd(fd_from, fd_to, file_from, file_to);

close_fd(fd_from);
close_fd(fd_to);
return (0);
}
