#include "main.h"

/**
 * _memset - the memset() function fills
 * the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: target
 * @b: constant yte
 * @n: number of bytereturn: return new value of target
 */

char (char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
