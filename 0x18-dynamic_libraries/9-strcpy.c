#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 *
 *Desc: qwertyuiop
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

