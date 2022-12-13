#include "main.h"

/**
 * _memset - Entry point
 *
 * Desc: description of function
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}

