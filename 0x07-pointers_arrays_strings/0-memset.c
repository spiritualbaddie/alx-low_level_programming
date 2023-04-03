#include "main.h"

/**
 * _memset - fill a lock of memory with a specific value
 * the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: target
 * @b: constant byte
 * @n: number of bytereturn: return new value of target
 *
 * return: changed array with new values for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
