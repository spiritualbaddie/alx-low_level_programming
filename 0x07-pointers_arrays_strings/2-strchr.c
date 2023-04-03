#include "main.h"
/**
 *_strchr - returns a pinter to the first occurence of the character c
 *
 * @s: string targeted
 * @c: character targeted
 *
 * return: returns pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
