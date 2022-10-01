#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 *
 * Desc: Header file containing the prototypes of all functions
 * included in the static library libmy.a
 */

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(void);
void _puts(char *s);
void *_strcpy(void);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void *_memset(void);
void *_memcpy(void);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif
