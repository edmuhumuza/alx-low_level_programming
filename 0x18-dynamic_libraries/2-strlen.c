#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * Desc - qwertyuiop
 *
 * Return: Always length
 */
int _strlen(char *s)
{
    int length = 0;
    while (*s != '\0')
    {
        length++;
        s++;
    }
    return length;
}

