#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem using malloc
 * @b: num of bytes to allocate
 *
 * Return: pointer to the allocated memory, exit 98 on failure
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);

if (!ptr)
exit(98);

return (ptr);
}
