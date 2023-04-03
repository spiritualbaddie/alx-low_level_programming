#include "main.h"
/**
 * _memcpy - the _memcpy () function copies n bytes
 * @dest: area where bytes are copied to
 * @src: area where bytes are copied from
 * @n: number of bytes to copy
 * return: returns a pointe to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
